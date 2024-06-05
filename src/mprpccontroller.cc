#include "mprpccontroller.h"

MprpcController::MprpcController() {
    m_failed = false;
    m_errText = "";
}

void MprpcController::Reset() {
    m_failed = false;
    m_errText = "";
}

bool MprpcController::Failed() const {
    return m_failed;
}

std::string MprpcController::ErrorText() const{
    return m_errText;
}

void MprpcController::SetFailed(const std::string& reason) {
    m_failed = true;
    m_errText = reason;//记录错误具体信息
}

//目前尚未实现
void MprpcController::StartCancel() {}
bool MprpcController::IsCanceled() const {return false;}
void MprpcController::NotifyOnCancel(google::protobuf::Closure* callback) {};