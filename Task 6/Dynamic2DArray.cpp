#include <iostream>
using namespace std;

void getValue(int& value, string text);

int main(){

    //seed to gennerate random numbers
    srand(time(0));

    int rows;
    int columns;

    getValue(rows, "rows");
    getValue(columns, "columns");
    
    // dynamically assign memory for an array of addresses
    int** arr = new int* [rows];

    // assign arrays to the array of addresses array
    for(int i = 0; i < rows; i++){
        arr[i] = new int[columns];
    }

    // assign random values to each sub-array
    for(int j = 0; j < rows; j++){
        for(int k = 0; k < columns; k++){
            arr[j][k] = rand() % 20;
        }
    }

    // printing out each value of the 2D array
     for(int j = 0; j < rows; j++){
        for(int k = 0; k < columns; k++){
            cout << arr[j][k] << ", ";
        }
        cout << endl;
    }
}

// function to get the row and column and to make sure value is less than 3 
void getValue(int& value, string text){
     bool key = true;
    do{
    cout << "Enter number of "<< text << ": ";
    cin >> value;

    if(value <= 3){
        key = false;
    }else {
        cout << endl << "Enter a number less than 4!" << endl;
    }

    }while(key);
}