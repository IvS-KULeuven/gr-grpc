protoc -I . --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` grgrpc.proto
protoc -I . --cpp_out=. grgrpc.proto
python -m grpc_tools.protoc --python_out=../python --proto_path=. --grpc_python_out=../python grgrpc.proto

