
#ifndef WORK_BLOCK_INCLUDE
#define WORK_BLOCK_INCLUDE

#include <gnuradio/top_block.h>
#include <gnuradio/filter/fir_filter_ccf.h>
#include <gnuradio/filter/firdes.h>
#include <osmosdr/source.h>
#include <queue_blocks/queue_sink.h>

namespace blocks{
    class WorkBlock : gr::top_block{
        public:
            WorkBlock(float CF=91.7, float RF_Gain=13, int variable_sample_rate_0=2000000) : gr::top_block("RTL Data Sinker"), d_source(osmosdr::source::make()), d_cf(CF), d_rf_gain(RF_Gain), d_variable_sample_rate(variable_sample_rate_0) d_low_pass_filter(gr::filter::fir_filter_ccf.make(variable_sample_rate_0/500000)){
                
            }
            
            float d_cf;
            float d_rf_gain;
            int d_variable_sample_rate;
            osmosdr::source::sptr d_source;
            gr::filter::fir_filter_ccf d_low_pass_filter;
    }
}

#endif
