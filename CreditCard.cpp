//
// Created by Kevin Leong on 4/18/20.
//

#include "CreditCard.h"

CreditCard::CreditCard(){
    this->cardNumber = cardNumber;
    this->cvv = cvv;
    this->expirationDate = expirationDate;
}

void CreditCard::display() {
    Transaction().display();

    cout << "Payment Method: Credit Card" << endl;
    cout << "Card Number: " << cardNumber << endl;
    cout << "Exp. Date: " << expirationDate << endl;
    cout << "CVV: " << cvv << endl << endl;

}

void CreditCard::save(ofstream file) {
}
