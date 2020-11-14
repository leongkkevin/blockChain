//
// Created by Kevin Leong on 4/18/20.
//

#include "Transaction.h"

using namespace std;

Transaction::Transaction() {
    //srand(time(nullptr));
    int randNum = rand();

    this->id = randNum;
    this->sender = 0;
    this->receiver = 0;

    this->amount = 0;
}

void Transaction::display() {
    string senderText;
    string receiverText;
    switch(sender){
        case 1:
            senderText = "Lyle School of Engineering";
            break;
        case 2:
            senderText = "Cox School of Business";
            break;
        case 3:
            senderText = "Dedman School of Law";
            break;
    }
    switch(receiver){
        case 1:
            receiverText = "Lyle School of Engineering";
            break;
        case 2:
            receiverText = "Cox School of Business";
            break;
        case 3:
            receiverText = "Dedman School of Law";
            break;
    }
    cout << "Transaction #" << id << " " << senderText << " sent $" << amount << " to " << receiverText << endl;
}

void Transaction::save(ofstream &file) {
    string senderText;
    string receiverText;
    switch(sender){
        case 1:
            senderText = "Lyle School of Engineering";
            break;
        case 2:
            senderText = "Cox School of Business";
            break;
        case 3:
            senderText = "Dedman School of Law";
            break;
    }
    switch(receiver){
        case 1:
            receiverText = "Lyle School of Engineering";
            break;
        case 2:
            receiverText = "Cox School of Business";
            break;
        case 3:
            receiverText = "Dedman School of Law";
            break;
    }
    file << id << "," << senderText << "," << receiverText << "," << amount << endl;
}

int Transaction::getId() const {
    return id;
}

void Transaction::setId(int id) {
    Transaction::id = id;
}

int Transaction::getSender() const {
    return sender;
}

void Transaction::setSender(int sender) {
    Transaction::sender = sender;
}

int Transaction::getReceiver() const {
    return receiver;
}

void Transaction::setReceiver(int receiver) {
    Transaction::receiver = receiver;
}

double Transaction::getAmount() const {
    return amount;
}

void Transaction::setAmount(double amount) {
    Transaction::amount = amount;
}


