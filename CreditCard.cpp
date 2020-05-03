//
// Created by Kevin Leong on 4/18/20.
//

#include "CreditCard.h"

CreditCard::CreditCard(){
    this->cardNumber = cardNumber;
    this->cvv = cvv;
    this->expirationDate = expirationDate;
}

CreditCard::CreditCard(string info) {
    stringstream ss;
    ss << info;

    string specInfo;

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
    this->cardNumber = specInfo;
    getline(ss, specInfo, ',');
    this->cvv = specInfo;
    getline(ss, specInfo, ',');
    this->expirationDate = specInfo;
}

void CreditCard::display() {
    Transaction::display();

    cout << "Payment Method: Credit Card" << endl;
    cout << "Card Number: " << cardNumber << endl;
    cout << "Exp. Date: " << expirationDate << endl;
    cout << "CVV: " << cvv << endl << endl;

}

void CreditCard::save(ofstream file) {
}

