/*
 * @Author: yaojianming 
 * @Date: 2023-03-14 21:45:00 
 * @Last Modified by: yaojianming
 * @Last Modified time: 2023-03-16 14:28:30
 */
//
// create by yaojianming on 3/11/23
//

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <linux/can.h>
#include <linux/can/raw.h>
#include <boost/function.hpp>


namespace socketcan
{
class SocketCAN
{
private:
    ifreq interface_request_{};
    sockaddr_can address_{};
    pthread_t receiver_thread_id_{};
    
public:
    int sock_fd = -1;
    bool terminate_receiver_thread = false;
    bool terminate_thread_running = false;
    
    SocketCAN() = default;
    ~SocketCAN() = default;
    bool open(const std::string& interface,boost::function<void(const can_frame& frame)> handler,
                int thread_priority);
    bool close();
    bool isOpen();
    void write(can_frame* frame);
    bool startReceiverThread(int thread_priorty);
    boost::function<void(const can_frame& frame)> reception_handle;

};




}
