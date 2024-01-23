#include "Network.h"

Network::Network(Computer c)
{
    NetID = "";
    devices = {c};
    numDevices++;
}

void Network::addDevice(Computer c)
{
    devices.push_back(c);
    numDevices++;
}

void routePacket(Packet p)
{
    
}
