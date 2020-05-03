//
// Created by Kevin Leong on 5/2/20.
//

#include "Peer.h"

Peer::Peer() {
    this->id = id;
    this->name = name;
}

Peer::Peer(int id, string name) {
    this->id = id;
    this->name = name;
}

void Peer::addTransaction(Transaction *transaction) {
    this->ledger.push_back(transaction);
}

void Peer::display() {
    cout << "-- Peer " << id << " Ledger --" << endl;
    for(int i = 0; i < this->ledger.getSize(); ++i){
        ledger.getPayloadAtIndex(i)->display();
    }
}

void Peer::save() {
    ofstream outFile;

    if(id == 1) {
            outFile.open("../peer1.csv");
            outFile << "Id,Sender,Receiver,Amount" << endl;
            for(int i = 0; i < ledger.getSize(); i++) {
                ledger.getPayloadAtIndex(i)->save(outFile);
            }
    }
    if(id == 2) {
        outFile.open("../peer2.csv");
        outFile << "Id,Sender,Receiver,Amount" << endl;
        for(int i = 0; i < ledger.getSize(); i++) {
            ledger.getPayloadAtIndex(i)->save(outFile);
        }
    }
    if(id == 3) {
        outFile.open("../peer3.csv");
        outFile << "Id,Sender,Receiver,Amount" << endl;
        for(int i = 0; i < ledger.getSize(); i++) {
            ledger.getPayloadAtIndex(i)->save(outFile);
        }
    }

}
