#include <iostream>
#include <fstream>

using namespace std;

int main(){
// creating file named example.txt in the same directory
   ofstream MyFile("example.txt");

// closing file
   MyFile.close();

    return 0;
}