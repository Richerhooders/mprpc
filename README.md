# Mprpc
Distributed Network Communication Framework  
mprpc分布式网络通信框架 

bin: 可执行文件  
build：cmake构建的编译中间文件  
example: 框架使用示例  
lib: 框架编译成动态库供上层使用  
src: 主要代码   
test: 示例测试代码  

RpcProvider的三个功能：1、集成了muduo的网络功能来提供Rpc请求和响应的收发  
                     2、Onmessage接受到远端的rpc请求之后，如何去解析数据调用业务方法  
                     3、给业务方提供了NotifyService用来向RpcProvider上注册想发布的rpc服务
