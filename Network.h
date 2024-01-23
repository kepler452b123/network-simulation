#include "Computer.h"
#include <vector>
#include "Packet.h"

#ifndef NETWORK_H
#define NETWORK_H

class Network{
    public:
    std::string NetID;
    std::vector<Computer> devices;
    std::vector<Packet> activePackets;
    unsigned int numDevices;

    Network(Computer c);
    void addDevice(Computer c);
    void routePacket(Packet p);
    void handleICMP();


};


#endif