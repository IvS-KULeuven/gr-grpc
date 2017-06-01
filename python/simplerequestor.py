import grpc

import grgrpc_pb2
import grgrpc_pb2_grpc

def run():
    channel = grpc.insecure_channel('localhost:50051')
    stub = grgrpc_pb2_grpc.GNURadioLinkStub(channel)
    i = 0
    for mydata in stub.RequestData(iter(())):
        i = i + len(mydata.m_byte)
        print(i)
        #if i % 1000 == 0:
        #    print(i)
        #print("client", str(mydata))

if __name__ == "__main__":
    run()
