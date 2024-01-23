#include <string>
#include <iostream> 
#include "Packet.h"
#ifndef COMPUTER.H
#define COMPUTER.H

class Computer
{
    public:
    std::string ip;
    std::string mac; 
    
    void sendPacket();
    void processPacket();

};


#endif