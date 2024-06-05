#include "logger.h"

//获取日志的单例
Logger& Logger::GetInstance(){
    static Logger logger;
    return logger;
};

Logger::Logger() {
    //启动专门的写日志线程
    std::thread writeLogTask([&]() {
        for(;;){
            //获取当前的日期，然后取日志信息，写入相应的日志文件
            time_t now = time(nullptr);
            tm *nowtime = localtime(&now);

            char file_name[128];
            sprintf(file_name,"%d-%d-%d-log.txt",nowtime -> tm_year + 1900,nowtime -> tm_mon + 1,nowtime -> tm_mday);

            FILE *pf = fopen(file_name,"a+");
            if(pf == nullptr) {
                std::cout << "logger file :" << file_name << "open error !" << std::endl;
            }

            std::string msg = m_lckQue.Pop();

            char time_buff[128];
            sprintf(time_buff,"%d:%d:%d => [%s]",
                    nowtime -> tm_hour,
                    nowtime -> tm_min,
                    nowtime -> tm_sec,
                    (m_loglevel == INFO ? "info":"error"));
            msg.insert(0,time_buff);
            msg.append("\n");

            fputs(msg.c_str(),pf);
            fclose(pf);
        }
    });
    //设置分离线程，守护线程
    writeLogTask.detach();
}

//设置日志级别
void Logger::SetLogLevel(LogLevel level){
    m_loglevel = level;
}

//写日志,把日志信息写入lockqueue缓冲区中
void Logger::Log(std::string msg) {
    m_lckQue.Push(msg);
}