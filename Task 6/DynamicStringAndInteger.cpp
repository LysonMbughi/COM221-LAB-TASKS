#include <iostream>
#include <string>
using namespace std;

int main(){
    int* number = new int;
    string* text = new string;

    cout << "Enter an integer: ";
    cin >> *number;

    cout << endl << "Enter a string: ";
    cin.ignore();
    getline(cin, *text);

    cout << "You entered the number: " << *number << endl;
    cout << "You entered the string: " << *text << endl;
    
    

}