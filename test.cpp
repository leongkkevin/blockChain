#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

struct SimpleData {
    int data;
};

int main() {
    cout << "-- Test Bench --\n" << endl;
    cout << "-- Some example tests for vector (Remove and replace with Linked Lists Tests) --\n" << endl;

    // Unit Test 1: Ensure that vectors can be created with ints and that push_back works
    vector<int> test1;
    test1.push_back(1);
    assert(test1.size() == 1);

    // Unit Test 2: Testing pointers with vector
    vector<int *> test2;
    test2.push_back(new int(10));
    assert(test2.size() == 1);

    // Unit Test 3: Ensure that vectors can be created with objects
    vector<SimpleData> test3;
    SimpleData data;
    data.data = 10;
    test3.push_back(data);
    assert(test3.size() == 1);

    cout << "All Tests Passed!" << endl;

    return 0;
}