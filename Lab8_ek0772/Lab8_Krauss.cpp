/**
 * @file Lab8_ek0772.cpp
 * @author Elijah K
 * @date 3-29-26
 * @brief A simple program to test and explore my knowledge of pointers.
 */
#include <iostream>
using namespace std;

int main() {
    int stackInt = 1;
    int * heapInt = new int(2);
    int * ptrToStack = &stackInt;
    int& refToStack = stackInt;

    cout << "Stack Variable (stackInt):" << endl;
    cout << "  Value: " << stackInt << endl;
    cout << "  Address: " << &stackInt << endl;

    cout << "Heap Variable (heapInt):" << endl;
    cout << "  Value: " << *heapInt << endl;
    cout << "  Address: " << heapInt << endl;

    cout << "Pointer to Stack (ptrToStack):" << endl;
    cout << "  Value Pointed To: " << *ptrToStack << endl;
    cout << "  Address Stored: " << ptrToStack << endl;

    cout << "Reference to Stack (refToStack):" << endl;
    cout << "  Value Referred To: " << refToStack << endl;
    cout << "  Address: " << &refToStack << endl;

    delete heapInt;
    return 0;
}