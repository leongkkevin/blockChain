//
// Created by Kevin Leong on 4/18/20.
//

#ifndef PROGRAM5_CASH_H
#define PROGRAM5_CASH_H

#include <iostream>
#include "Transaction.h"

class Cash: public Transaction {
public:
    Cash();
    void display() override;
    void save(ofstream file) override;

private:
    double totalPaid;
    double changeDue;
};


#endif //PROGRAM5_CASH_H
