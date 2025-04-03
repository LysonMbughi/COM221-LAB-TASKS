#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string line;
    fstream myFile("example.txt");

    if(myFile.is_open()){
        while(getline(myFile,line)){
            cout << line << endl;
        }
        myFile.close();
    }else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}