#include <iostream>
#include "mprpcapplication.h"
#include "user.pb.h"
#include "mprpcchannel.h"

int main(int argc,char** argv) {
    //整个程序启动以后，想使用mprpc框架来享受rpc服务调用，一定先调用框架的初始化函数(只初始化一次)
    MprpcApplication::Init(argc,argv);

    //演示调用远程发布的rpc方法Login
    //调用方都是通过UserServiceRpc_Stub的参数Rpcchannel中的CallMethod方法调用远程发布的prc方法
    fixbug::UserServiceRpc_Stub stub(new MprpcChannel());
    //rpc方法的请求参数
    fixbug::LoginRequest request;
    request.set_name("zhang san");
    request.set_pwd("123456");
    //rpc方法的响应
    fixbug::LoginResponse response;
    //发起rpc方法的调用
    stub.Login(nullptr,&request,&response,nullptr);

    //一次rpc调用完成，读返回的结果
    if(response.result().errcode() == 0) {
        std::cout << "Rpc Login Response Success:" << response.success() << std::endl;
    }else {
        std::cout << "Rpc Login Response Error:" << response.result().errmsg() << std::endl; 
    }

    return 0;
}