//
// Created by Kevin Leong on 4/18/20.
//

#include "Check.h"

Check::Check(){
    this->accountNumber = accountNumber;
    this->routingNumber = routingNumber;
}

void Check::display() {
    Transaction().display();

    cout << "Payment Method: Check" << endl;
    cout << "Routing Number: " << routingNumber << endl;
    cout << "Account Number: " << accountNumber << endl << endl;
}

void Check::save(ofstream file) {

}
