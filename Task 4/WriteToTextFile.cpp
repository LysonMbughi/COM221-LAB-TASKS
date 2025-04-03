#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ofstream myfile("output/example.txt");

    if(myfile.is_open()){
        myfile << "This is a line.\n";
        myfile << "This is another line.\n";
        myfile.close();
    }else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}