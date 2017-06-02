from time import sleep
from concurrent import futures
import queue
import grpc
import grgrpc_pb2
import grgrpc_pb2_grpc


queue_dict = {}
q = queue.Queue()

class GNURadioLinkServicer(grgrpc_pb2_grpc.GNURadioLinkServicer):

    def RequestData(self, request_iterator, context):
        print("in RequestData")
        request = request_iterator.__next__()
        my_code = request.code
        if not my_code in queue_dict.keys():
            queue_dict[my_code] =  queue.Queue()

        my_queue = queue_dict[my_code]

        while True:
            item = my_queue.get()
            if item is None:
                break

            yield item
            my_queue.task_done()

    def PublishData(self, request_iterator, context):
        print("in Publishdata")
        my_queue = None
        for data in request_iterator:
            if data.code:
                print("we have a code {}".format(data.code))
                if not data.code in queue_dict.keys():
                    queue_dict[data.code] =  queue.Queue()

                my_queue = queue_dict[data.code]

            #sleep(0.00001)
            if my_queue: 
                my_queue.put(data)

def run():
    server = grpc.server(futures.ThreadPoolExecutor(max_workers=10))
    grgrpc_pb2_grpc.add_GNURadioLinkServicer_to_server(GNURadioLinkServicer(), server)

    server.add_insecure_port('[::]:50051')
    server.start()
    sleep(500)


if __name__ == "__main__":
    run()
