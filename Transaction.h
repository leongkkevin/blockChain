//
// Created by Kevin Leong on 4/18/20.
//

#ifndef PROGRAM5_TRANSACTION_H
#define PROGRAM5_TRANSACTION_H

#include <fstream>
#include <iostream>
#include <random>

using namespace std;


class Transaction {
public:
    Transaction();
    virtual void display();
    virtual void save(ofstream &file);


    int getId() const;

    void setId(int id);

    int getSender() const;

    void setSender(int sender);

    int getReceiver() const;

    void setReceiver(int receiver);

    double getAmount() const;

    void setAmount(double amount);

private:
    int id;
    int sender;
    int receiver;
    double amount;

};


#endif //PROGRAM5_TRANSACTION_H
