//
// Created by Kevin Leong on 4/18/20.
//

#include "Cash.h"

Cash::Cash(){
    this->totalPaid = totalPaid;
    this->changeDue = changeDue;
}

void Cash::display() {
    Transaction().display();

    cout << "Payment Method: Cash" << endl;
    cout << "Amount Paid: " << totalPaid << endl;
    cout << "Change Given: " << changeDue << endl << endl;
}

void Cash::save(ofstream file) {
}
