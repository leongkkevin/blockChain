//
// Created by Kevin Leong on 4/18/20.
//

#ifndef PROGRAM5_CASH_H
#define PROGRAM5_CASH_H

#include <iostream>
#include <sstream>
#include "Transaction.h"

class Cash: public Transaction {
public:
    Cash();
    Cash(string info);

    void display() override;
    void save(ofstream file);

private:
    double totalPaid;
    double changeDue;
};


#endif //PROGRAM5_CASH_H
