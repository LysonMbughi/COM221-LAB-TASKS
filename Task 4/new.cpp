#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream> // Added for stringstream

using namespace std;

void vowelCount(string sentence);
void wordCount(string sentence);
void reverse(string sentence);
void capitalize(string sentence);
vector<string> wordbreak(string sentence);
bool contains(string sentence, const char character);

int main() {
    string fileData;

    fstream file("file.txt");
    if (!file.is_open()) {
        cerr << "Error: Could not open file.txt" << endl;
        return 1;
    }
    
    // Read entire file content (including multiple lines)
    string line;
    while (getline(file, line)) {
        fileData += line + "\n";
    }
    file.close();

    // Remove trailing newline if present
    if (!fileData.empty() && fileData.back() == '\n') {
        fileData.pop_back();
    }

    cout << "File content size: " << fileData.size() << " characters" << endl << endl;
        
    vowelCount(fileData);
    wordCount(fileData);
    reverse(fileData);
    capitalize(fileData);

    return 0;
}

void vowelCount(string sentence) {
    char vowels[] = {'a','A','e','E','i','I','o','O','u','U'};
    int count = 0;

    for(char letter: sentence) {
        for(char vowel: vowels) {
            if(letter == vowel) {
                count++;
                break; // No need to check other vowels once found
            }
        }
    }

    cout << "The statement: " << sentence << endl;
    cout << "has " << count << " vowels." << endl << endl;
}

void wordCount(string sentence) {
    vector<string> words = wordbreak(sentence);
    cout << "The statement: " << sentence << endl;
    cout << "Contains " << words.size() << " words." << endl << endl;
}

void reverse(string sentence) {
    string reversed;
    for(char letter : sentence) {
        reversed = letter + reversed;
    }

    cout << "The statement: " << sentence << endl;
    cout << "In reverse is: " << reversed << endl << endl;
}

void capitalize(string sentence) {
    vector<string> phrase = wordbreak(sentence);

    for(size_t i = 0; i < phrase.size(); i++) {
        if (!phrase[i].empty()) {
            // Capitalize first character of each word
            phrase[i][0] = toupper(phrase[i][0]);
        }
    }

    for (string word : phrase) {
        cout << word << " ";
    }
    cout << endl << endl;
}

vector<string> wordbreak(string sentence) {
    vector<string> words;
    stringstream ss(sentence);
    string word;
    
    while (ss >> word) { // This automatically handles multiple spaces
        words.push_back(word);
    }

    return words;
}

bool contains(string sentence, const char character) {
    for(char letter: sentence) {
        if(letter == character) {
            return true;
        }
    }
    return false;
}