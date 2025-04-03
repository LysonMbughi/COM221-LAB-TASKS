#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char data[100];

    ofstream outputFile;
    outputFile.open("aFile.txt");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    outputFile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    cin.ignore();

    outputFile << data << endl;

    outputFile.close();

    ifstream inFile;
    inFile.open("aFile.txt");

    cout << "Read from the file" << endl;
    inFile >> data;

    cout << data << endl;

    inFile >> data;
    cout << data << endl;

    inFile.close();
    
    return 0;
}