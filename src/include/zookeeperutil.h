#pragma once

#include <semaphore.h>
#include <zookeeper/zookeeper.h>
#include <string>

class ZkClient
{
public:
    ZkClient();
    ~ZkClient();
    //zkclient 启动连接zkserver
    void Start();
    //在zkserver上根据指定的path创建znode节点
    void Create(const char *path,const char *data,int datalen,int state = 0);//state=0永久节点
    //根据参数指定的znode节点的路径获取znode节点的值
    std::string GetData(const char *path);
private:
    //zk的客户端句柄
    zhandle_t * m_zhandle;
};