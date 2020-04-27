//
// Created by Kevin Leong on 4/18/20.
//

#ifndef PROGRAM5_CHECK_H
#define PROGRAM5_CHECK_H

#include <iostream>
#include "Transaction.h"

class Check: public Transaction {
public:
    Check();
    void display() override;
    void save(ofstream file) override;

private:
    string routingNumber;
    string accountNumber;
};


#endif //PROGRAM5_CHECK_H
