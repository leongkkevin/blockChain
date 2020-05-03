//
// Created by Kevin Leong on 5/2/20.
//
#include <iostream>

#include "Network.h"

#include "Cash.h"
#include "Check.h"
#include "CreditCard.h"

Network::Network() {
}

void Network::processTransactions(std::ifstream &inFile) {
    //get a size for transfer
    int amtTrans = 0;
    string tempString;
    string bigString;
    while(!inFile.eof()){
        getline(inFile, tempString, '\n');
        bigString = bigString + tempString + " ";
        amtTrans++;
    }

    inFile.clear();
    inFile.seekg(0);
    //inFile.close();

    //Creation of Ledgers
    //LinkedList<Transaction*> PeerOne;
    //LinkedList<Transaction*> PeerTwo;
    //LinkedList<Transaction*> PeerThree;

    //Creation of Peers
    Peer PeerOne(1, "Lyle");
    Peer PeerTwo(2, "Cox");
    Peer PeerThree(3, "Dedman");

    //Parsing and sorting
    //inFile.open(argv[1]);
    stringstream ss;
    ss << bigString;

    //Sorting
    string info;
    for(int i = 0; i < ss.tellp(); i++){
        getline(ss, tempString, ' ');
        info = "";
        if(tempString == "Credit"){

            getline(ss, tempString, ' ');
            info += tempString + ",";
            int sender = stoi(tempString);
            getline(ss, tempString, ' ');
            int receiver = stoi(tempString);
            info += tempString + ",";

            for(int i = 0; i < 4; ++i){
                getline(ss, tempString, ' ');
                info += tempString + ",";
            }

            //check for right ledgers
            if(sender == 1 || receiver == 1){
                auto* trans = new CreditCard(info);
                PeerOne.addTransaction(trans);
            }
            if(sender == 2 || receiver == 2){
                auto* trans = new CreditCard(info);
                PeerTwo.addTransaction(trans);
            }
            if(sender == 3 || receiver == 3){
                auto* trans = new CreditCard(info);
                PeerThree.addTransaction(trans);
            }
        }

        if(tempString == "Cash"){

            getline(ss, tempString, ' ');
            info += tempString + ",";
            int sender = stoi(tempString);
            getline(ss, tempString, ' ');
            int receiver = stoi(tempString);
            info += tempString + ",";

            for(int i = 0; i < 3; ++i){
                getline(ss, tempString, ' ');
                info += tempString + ",";
            }

            //Check for right ledgers
            if(sender == 1 || receiver == 1){
                auto* trans = new Cash(info);
                PeerOne.addTransaction(trans);
            }
            if(sender == 2 || receiver == 2){
                auto* trans = new Cash(info);
                PeerTwo.addTransaction(trans);
            }
            if(sender == 3 || receiver == 3){
                auto* trans = new Cash(info);
                PeerThree.addTransaction(trans);
            }

        }

        if(tempString == "Check"){
            //cout << "Check!!" << endl;

            getline(ss, tempString, ' ');
            info += tempString + ",";
            int sender = stoi(tempString);
            getline(ss, tempString, ' ');
            int receiver = stoi(tempString);
            info += tempString + ",";

            for(int i = 0; i < 3; ++i){
                getline(ss, tempString, ' ');
                info += tempString + ",";
            }

            //Check for appropriate ledger
            if(sender == 1 || receiver == 1){
                auto* trans = new Check(info);
                PeerOne.addTransaction(trans);
            }
            if(sender == 2 || receiver == 2){
                auto* trans = new Check(info);
                PeerTwo.addTransaction(trans);
            }
            if(sender == 3 || receiver == 3){
                auto* trans = new Check(info);
                PeerThree.addTransaction(trans);
            }
        }

    }
    peers.push_back(PeerOne);
    peers.push_back(PeerTwo);
    peers.push_back(PeerThree);
}

void Network::display() {
    for(int i = 0; i < peers.getSize(); ++i){
        peers.getPayloadAtIndex(i).display();
    }
}

void Network::save() {
    for (int i = 0; i < peers.getSize(); i++) {
        peers.getPayloadAtIndex(i).save();
    }
}
