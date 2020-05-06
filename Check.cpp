//
// Created by Kevin Leong on 4/18/20.
//

#include "Check.h"

Check::Check(){
    this->accountNumber = accountNumber;
    this->routingNumber = routingNumber;
}

Check::Check(string info) {
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
    this->routingNumber = specInfo;

    getline(ss, specInfo, ',');
    this->accountNumber = specInfo;
}

void Check::display() {
    Transaction::display();

    cout << "Payment Method: Check" << endl;
    cout << "Routing Number: " << routingNumber << endl;
    cout << "Account Number: " << accountNumber << endl << endl;
}

void Check::save(ofstream file) {

}

