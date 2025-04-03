#include <iostream>

using namespace std;
int get_int();

int main(){
    int value;
    bool key = true;

    cout << "Enter an integer between 5 and 10" << endl;

    do {
        value = get_int();

        if(!(value > 5 && value < 10)){
            cout << "you have entered " << value << " please enter a number between 5 and 10." << endl;
        } else {
            cout << "your input value(" << value << ") has been accepted." << endl;
            key = false;
        }

    } while(key);


    return 0;
}

int get_int()
{
    bool key = true;
    string reader;
    int value;

    while (key){
        try{  // try block to catch any errors
            key = false;

            cin >> reader;    // reads a string from the console and stores the value in the reader variable
            value = stoi(reader);     // stoi() converts a string to an integer then assigns the result to value
        } catch (const invalid_argument& e){  // catching and handling an invalid_argument error generated in the try block
            key = true;
            cout<< "Sorry, you entered an invalid number. Please try again.\n";
    }
    }

return value;
}