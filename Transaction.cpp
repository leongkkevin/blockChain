//
// Created by Kevin Leong on 4/18/20.
//

#include "Transaction.h"

using namespace std;

Transaction::Transaction() {
    srand((unsigned) time(0));

    this->id = rand();
    this->sender = rand();
    this->receiver = rand();

    this->amount = 0;
}

void Transaction::display() {
    cout << "Transaction #" << id << " " << sender << " sent $" << amount << " to " << receiver << endl;
    cout << endl;
}

void Transaction::save(ofstream file) {

}
