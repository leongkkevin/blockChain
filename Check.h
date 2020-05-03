//
// Created by Kevin Leong on 4/18/20.
//

#ifndef PROGRAM5_CHECK_H
#define PROGRAM5_CHECK_H

#include <iostream>
#include <sstream>

#include "Transaction.h"

class Check: public Transaction {
public:
    Check();
    Check(string info);

    void display() override;
    void save(ofstream file);

private:
    string routingNumber;
    string accountNumber;
};


#endif //PROGRAM5_CHECK_H
