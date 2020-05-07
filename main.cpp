#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

#include "Transaction.h"
#include "Cash.h"
#include "Check.h"
#include "CreditCard.h"

#include "Peer.h"
#include "Network.h";

#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main(int argc, char* argv[]) {
    

    if (argc != 2) {
        cout << "Invalid number of arguments. Correct usage: ./a.out <filename>" << endl;
        return -1;
    }

    // fileName contains the name of the file that needs to be read
    char *fileName = argv[1];
    cout << "File to read: " << fileName << endl;

    ifstream inFile;
    inFile.open(argv[1]);

    Network network;
    network.processTransactions(inFile);

    network.display();
    network.save();

    return 0;
}