#include "test.pb.h"
#include <iostream>
#include <string>
using namespace fixbug;
int main() {
    // LoginResponse rsp;
    // Resultcode *rc = rsp.mutable_result();
    // rc -> set_errcode(1);
    // rc -> set_errmsg("登录失败了");
    GetFriendListsReponse rsp;
    Resultcode *rc = rsp.mutable_result();
    rc -> set_errcode(0);
    rc -> set_errmsg("");

    User *user1 = rsp.add_friend_list();
    user1->set_name("buhaonan");
    user1->set_age(200);
    user1->set_age(User::Man);

    User *user2 = rsp.add_friend_list();
    user2->set_name("shigou");
    user2->set_age(100);
    user2->set_age(User::Man);
    std::cout << rsp.friend_list_size() << std::endl;
}

int test() {

    //封装了login请求对象的数据
    LoginRequest req;
    req.set_name("zhang san");
    req.set_pwd("123456");
    
    //对象序列化 -> char*
    std::string send_str;
    if(req.SerializeToString(&send_str)) {
        std::cout << send_str.c_str() << std::endl;
    }

    //从send_str 反序列化一个login请求
    LoginRequest reqB;
    if(reqB.ParseFromString(send_str)) {
        std::cout<< reqB.name() << std::endl;
        std::cout<< reqB.pwd() << std::endl;
    }
    return 0;
}