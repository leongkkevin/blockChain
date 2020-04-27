#include <iostream>
#include <fstream>

#include "Transaction.h"

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

    return 0;
}