#pragma once
#include <google/protobuf/service.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/message.h>

//定义MprpcChannel类主要是为了重写RpcChannel中的CallMethod方法，因为它是纯虚函数
class MprpcChannel:public::google::protobuf::RpcChannel{
    //所有通过stub代理对象调用的rpc方法，都走到这里了，统一做rpc方法调用的数据序列化和反序列化。
    void CallMethod(const google::protobuf::MethodDescriptor* method,
                          google::protobuf::RpcController* controller, const google::protobuf::Message* request,
                          google::protobuf::Message* response, google::protobuf::Closure* done);
};