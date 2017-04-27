
#ifndef WORK_BLOCK_INCLUDE
#define WORK_BLOCK_INCLUDE

#include <gnuradio/top_block.h>
#include <gnuradio/analog/quadrature_demod_cf.h>
#include <gnuradio/filter/rational_resampler_base_fff.h>
#include <gnuradio/filter/fir_filter_ccf.h>
#include <gnuradio/filter/firdes.h>
#include <osmosdr/source.h>
#include "sink_impl.h"

int main(){
    auto top_block = gr::make_top_block("RTL Data Sink");
    
    auto sink = gr::grpc_blocks::sink::make();
    
    auto source = osmosdr::source::make("numchan=1 ");
    source->set_sample_rate(2000000);
    source->set_center_freq(100,0);
    source->set_freq_corr(0,0);
    source->set_dc_offset_mode(2,0);
    source->set_iq_balance_mode(0,0);
    source->set_gain_mode(false, 0);
    source->set_gain(13, 0);
    source->set_if_gain(20,0);
    source->set_bb_gain(20,0);
    source->set_antenna("", 0);
    source->set_bandwidth(0,0);
    
    auto low_pass_filter = gr::filter::fir_filter_ccf::make(2000000/500000, gr::filter::firdes::low_pass(1, 2000000, 100000, 50000, gr::filter::firdes::WIN_HAMMING, 6.76));
    
    auto rational_resampler = gr::filter::rational_resampler_base_fff::make(48, 500, std::vector<float>());
    
    auto analog_wfm_rcv = gr::analog::quadrature_demod_cf::make(5000000);
    
    
    top_block->connect(source, 0, low_pass_filter, 0);
    top_block->connect(analog_wfm_rcv, 0, rational_resampler, 0);
    top_block->connect(low_pass_filter, 0, analog_wfm_rcv, 0);
    top_block->connect(rational_resampler, 0, sink, 0);
    
    try {
        top_block->start(0);
    }
    catch(...){
    }
    return 0;
}

#endif
