#include <iostream>
#include <string>

using namespace std;

int main(){
   
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    // copy str1 into str3
    str3 = str1; 
    cout << "str3 = str1 : " << str3 << endl;

    // concatinates str1 and str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str1 << endl;

    // total length of str3 after concatination
    len = str1.size();
    cout << "str1.size() : " << len << endl;

    return 0;
}