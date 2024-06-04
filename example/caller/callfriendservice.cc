#include <iostream>
#include "mprpcapplication.h"
#include "friend.pb.h"


int main(int argc,char** argv) {
    //整个程序启动以后，想使用mprpc框架来享受rpc服务调用，一定先调用框架的初始化函数(只初始化一次)
    MprpcApplication::Init(argc,argv);

    //演示调用远程发布的rpc方法Login
    //调用方都是通过UserServiceRpc_Stub的参数Rpcchannel中的CallMethod方法调用远程发布的prc方法
    fixbug::FriendServiceRpc_Stub stub(new MprpcChannel());
    //rpc方法的请求参数
    fixbug::GetFriendsListRequest request;
    request.set_userid(1000);
    //rpc方法的响应
    fixbug::GetFriendsListResponse response;
    //发起rpc方法的调用

    MprpcController controller;
    stub.GetFriendsList(&controller,&request,&response,nullptr);

    //一次rpc调用完成，读返回的结果
    if(controller.Failed()) {
        std::cout << controller.ErrorText() << std::endl;
    }else{
        if(response.result().errcode() == 0) {
            std::cout << "Rpc Login GetFriendsList Success:"  << std::endl;
            int size = response.friends_size();
            for(int i = 0;i < size;i++) {
                std::cout << "index:" <<(i + 1) << " name:" << response.friends(i) << std::endl;
            }
        }else {
            std::cout << "Rpc Login GetFriendsList Error:" << response.result().errmsg() << std::endl; 
        }

    }
    return 0;
}