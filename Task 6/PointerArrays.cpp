#include <iostream>
using namespace std;

int main(){
    int numberArray[5];

    int* pPointer = nullptr;

    //assign the address to the first element to the pointer
    pPointer = numberArray;

    *pPointer = 10;  // assing a value to the first element 

      /*increment the pointer using pointer arithmetic 
    to assign the addressof the second to the pointer*/
    pPointer++;
    *pPointer = 20;

    //assign the address of the third element to the pointer
    pPointer = &numberArray[2];
    *pPointer = 30;

    /*assign the address of the fourth element to the 
    pointer using pointer arithmetic*/
      pPointer = numberArray + 3;
    *pPointer = 40;

    /*assign a value to the fifth element using 
    indirection and pointer arithmetic*/
    *(pPointer + 1) = 50;

    //iterate and output all the elements in array
    for(int n = 0; n < 5; n++){
          cout << numberArray[n] << ", ";
    }

    return 0;
}