#include <iostream>
#include <string>
using namespace std;

void deleteVowel(string &str) {
    for (int i = 0; i < str.length(); i++) {
        char c = tolower(str[i]);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            str.erase(i, 1); // remove 1 character at position i
            i--; // step back string got shorter
        }
    }
}

int main() {
    string str;
    cout << "Enter string: ";
    getline(cin, str);
    deleteVowel(str);
    cout << "Without vowels: " << str << endl;
}
