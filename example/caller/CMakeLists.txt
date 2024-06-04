# 设置源文件列表
set(SRC_LIST calluserservice.cc ../user.pb.cc)

# 添加可执行文件
add_executable(consumer ${SRC_LIST})

# 查找并包含 Protobuf
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIRS})

# 链接库文件
link_directories(/usr/local/lib)
target_link_libraries(consumer mprpc ${PROTOBUF_LIBRARIES})

