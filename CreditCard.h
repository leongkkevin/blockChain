//
// Created by Kevin Leong on 4/18/20.
//

#ifndef PROGRAM5_CREDITCARD_H
#define PROGRAM5_CREDITCARD_H

#include <iostream>
#include "Transaction.h"

class CreditCard: public Transaction {
public:
    CreditCard();
    void display() override;
    void save(ofstream file) override;

private:
    string cardNumber;
    string expirationDate;
    string cvv;
};


#endif //PROGRAM5_CREDITCARD_H
