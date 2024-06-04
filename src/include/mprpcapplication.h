#pragma once
#include "mprpcconfig.h"
#include "mprpcchannel.h"
#include "mprpccontroller.h"

//框架基础类
class MprpcApplication {
public:
    static void Init(int argc,char** argv);
    static MprpcApplication& GetInstance(); 
    static MprpcConfig& GetConfig();
private:
    static MprpcConfig m_config;

    MprpcApplication(){};
    MprpcApplication(const MprpcApplication &) = delete;
    MprpcApplication(MprpcApplication&&) = delete;

};