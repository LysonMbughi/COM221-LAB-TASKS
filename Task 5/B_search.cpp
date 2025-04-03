#include <iostream>

using namespace std;

int main(){

    string arr[] = {"B123", "C234", "A345", "C15", "B17", "G3003", "C235", "B179"};

    for(string item : arr ){
        if(item[0] == 'B'){
            cout << item << endl;
        }
    }

    return 0;
}