#include <iostream>
using namespace std;

int main(){
    // declaring a pointer and initializing it
    int* pPointer = nullptr;

    int integerVar = 5;

    //assigning pointer address of an object
    pPointer = &integerVar;

    //outputing the value of the object 
    cout << "integerVar: " << integerVar << endl;

    //outputting the address of integerVar
    cout << "Address of integerVar: " << &integerVar << endl;

    // outputting address assigned to pPointer
    cout << "pPointer: " << pPointer << endl;

    //outputting the address of pPointer
    cout << "address of pPointer: " << &pPointer << endl;

    return 0;
    
}