import grpc

import grgrpc_pb2
import grgrpc_pb2_grpc

def run():
    channel = grpc.insecure_channel('localhost:50051')
    stub = grgrpc_pb2_grpc.GNURadioLinkStub(channel)
    for grdata in stub.SendData(iter(())):
        print(str(grdata))
        print("hoho")

if __name__ == "__main__":
    run()
