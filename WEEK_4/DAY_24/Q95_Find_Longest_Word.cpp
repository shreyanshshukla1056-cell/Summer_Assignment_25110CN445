#include <iostream>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    string word = "", longest = "";

    for(char ch : str) {

        if(ch != ' ')
            word += ch;

        else {

            if(word.length() > longest.length())
                longest = word;

            word = "";
        }
    }

    if(word.length() > longest.length())
        longest = word;

    cout << longest;

    return 0;
}