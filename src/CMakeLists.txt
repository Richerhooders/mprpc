# 查找当前目录中的所有源文件
# aux_source_directory(. SRC_LIST)
set(SRC_LIST mprpcapplication.cc 
             mprpcconfig.cc 
             rpcheader.pb.cc 
             rpcprovider.cc 
             mprpcchannel.cc 
             mprpccontroller.cc)
# 添加共享库
add_library(mprpc ${SRC_LIST})
target_link_libraries(mprpc muduo_net muduo_base pthread)