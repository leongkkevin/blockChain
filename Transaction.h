//
// Created by Kevin Leong on 4/18/20.
//

#ifndef PROGRAM5_TRANSACTION_H
#define PROGRAM5_TRANSACTION_H

#include <fstream>
#include <iostream>

using namespace std;


class Transaction {
public:
    Transaction();
    virtual void display();
    virtual void save(ofstream file);

private:
    int id;
    int sender;
    int receiver;
    double amount;

};


#endif //PROGRAM5_TRANSACTION_H
