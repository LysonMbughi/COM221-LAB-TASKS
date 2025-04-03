#include <iostream>
using namespace std;

int main(){

    int firstValue;
    int secondValue;

    int* pPointer = nullptr;

    //assign pointer with address of firstValue
    pPointer = &firstValue;
    *pPointer = 10; // Indirection

    //assign pointer with the address of secondValue 
    pPointer = &secondValue;
    *pPointer = 20; // Indirection

    cout << "firstValue is " << firstValue << endl;
    cout << "secondValue is " << secondValue<< endl;

    return 0;
}