//
// Created by Kevin Leong on 4/18/20.
//

#include "Cash.h"

Cash::Cash(){
    this->totalPaid = totalPaid;
    this->changeDue = changeDue;
}

Cash::Cash(string info) {
    stringstream ss;
    ss << info;

    string specInfo;

    setId(rand());

    getline(ss, specInfo, ',');
    int sender = stoi(specInfo);
    setSender(sender);

    getline(ss, specInfo, ',');
    int receiver = stoi(specInfo);
    setReceiver(receiver);

    getline(ss, specInfo, ',');
    int amount = stoi(specInfo);
    setAmount(amount);

    getline(ss, specInfo, ',');
    int totalPaid = stoi(specInfo);
    this->totalPaid = totalPaid;

    getline(ss, specInfo, ',');
    int changeDue = stoi(specInfo);
    this->changeDue = changeDue;
}

void Cash::display() {
    Transaction::display();

    cout << "Payment Method: Cash" << endl;
    cout << "Amount Paid: " << totalPaid << endl;
    cout << "Change Given: " << changeDue << endl << endl;
}

void Cash::save(ofstream file) {
}
