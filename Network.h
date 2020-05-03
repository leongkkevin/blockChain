//
// Created by Kevin Leong on 5/2/20.
//

#ifndef PROGRAM5_NETWORK_H
#define PROGRAM5_NETWORK_H

#include "Peer.h"

class Network {
    LinkedList<Peer> peers; // a linked list containing peer objects
    int numberOfPeers{};

public:
    Network();
    void processTransactions(std::ifstream& inputFile); // create the blockchain network
    void display(); // print to console
    void save(); // save to peer .csv files
};


#endif //PROGRAM5_NETWORK_H
