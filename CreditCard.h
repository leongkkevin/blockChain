//
// Created by Kevin Leong on 4/18/20.
//

#ifndef PROGRAM5_CREDITCARD_H
#define PROGRAM5_CREDITCARD_H

#include <iostream>
#include <sstream>
#include <random>

#include "Transaction.h"

class CreditCard: public Transaction {
public:
    CreditCard();
    CreditCard(string info);
    void display() override;
    void save(ofstream file);

private:
    string cardNumber;
    string expirationDate;
    string cvv;
};


#endif //PROGRAM5_CREDITCARD_H
