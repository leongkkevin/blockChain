//
// Created by Kevin Leong on 5/2/20.
//

#ifndef PROGRAM5_PEER_H
#define PROGRAM5_PEER_H

#include "Transaction.h"
#include "LinkedList.h"

class Peer {
    int id;
    string name;
    LinkedList<Transaction *> ledger;

public:
    Peer();
    Peer(int id, string name);

    void addTransaction(Transaction* transaction);
    void display();
    void save();

};

#endif //PROGRAM5_PEER_H
