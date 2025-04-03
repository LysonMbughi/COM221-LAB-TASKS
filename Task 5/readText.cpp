#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>

using namespace std;

void vowelCount(string sentence);
void wordCount(string sentence);
void reverse(string sentence);
void capitalize(string sentence);
vector<string> wordbreak(string sentence);
bool contains(string sentence, const char character);


int main(){
    
    string fileData;

    ifstream file;
    file.open("file.txt", ios::binary);
    
    // Read entire file content (including multiple lines)
   if(file.is_open()){
        getline(file,fileData);
            
        file.close();
    }else {
        cout << "Unable to open file" << endl;
    }
        
        
    vowelCount(fileData);

    wordCount(fileData);

    reverse(fileData);

    capitalize(fileData);
        

    return 0;
}

void vowelCount(string sentence){
    char vowels[] = {'a','A','e','E','i','I','o','O','u','U'};

    int count = 0;

   for(char letter: sentence){
        for(char vowel: vowels){
            if(letter == vowel){
                count ++;
            }
        }
   }

   cout << "The statement: " << sentence << endl;
   cout << "has " << count << " vowels." << endl << endl;
}

void wordCount(string sentence){
      vector words = wordbreak(sentence);

      cout << "The statement : " << sentence << endl;
      cout << "Contains " << words.size() << " words."<< endl << endl;
}

void reverse(string sentence){
    string reverse = "";

    for(char letter : sentence){
        reverse = letter + reverse;
    }

    cout << "The statement : " << sentence << endl;
    cout << "In reverse is : " << reverse << endl << endl;
}

void capitalize(string sentence){
    vector phrase = wordbreak(sentence);

    int length = phrase.size();

    for(int i = 0; i < length; i++){
        phrase[i][1] = toupper(phrase[i][1]);
    }

    for (string word : phrase)
    {
       cout << word << " " ;
    }

    cout << endl << endl;
    
}

vector<string> wordbreak(string sentence){
     vector<string> words;
    string word;
    string substring = sentence;

    bool key = true;

    while(key){
        int index;  

        if(contains(substring,' ')){

            index = substring.find(' ');
            word = substring.substr(0,index);
            words.push_back(word);
            substring = substring.substr(index + 1,substring.size());

        }else {
          words.push_back(substring);
          key = false;
        }
    } 

    return words;
}

bool contains(string sentence, const char character){
   bool contains = false;

   for(char letter: sentence){
            if(letter == character){
                contains = true;
            }
        }
        return contains;
   }

