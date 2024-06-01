#pragma once

//框架基础类
class MprpcApplication {
public:
    static void Init(int argc,char** argv);
    static MprpcApplication& GetInstance(); 
private:
    MprpcApplication(){};
    MprpcApplication(const MprpcApplication &) = delete;
    MprpcApplication(MprpcApplication&&) = delete;

};