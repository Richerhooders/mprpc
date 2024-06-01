# 查找当前目录中的所有源文件
aux_source_directory(. SRC_LIST)
# 添加共享库
add_library(mprpc SHARED ${SRC_LIST})