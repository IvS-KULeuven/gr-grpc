from time import sleep
from concurrent import futures
import queue
import grpc
import grgrpc_pb2
import grgrpc_pb2_grpc

q = queue.Queue()

class GNURadioLinkServicer(grgrpc_pb2_grpc.GNURadioLinkServicer):
    def RequestData(self, request_iterator, context):
        print("in RequestData")
        while True:
            item = q.get()
            if item is None:
                break
            yield item
            q.task_done()

    def PublishData(self, request_iterator, context):
        print("in Publishdata")
        for data in request_iterator:
            #sleep(0.00001)
            q.put(data)

def run():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    grgrpc_pb2_grpc.add_GNURadioLinkServicer_to_server(GNURadioLinkServicer(), server)

    server.add_insecure_port('[::]:50051')
    server.start()
    sleep(500)


if __name__ == "__main__":
    run()
