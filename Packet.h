
#ifndef PACKET_H
#define PACKET_H

struct Packet{
    std::string header;
    Computer * source;
    Computer * destination;
};

#endif