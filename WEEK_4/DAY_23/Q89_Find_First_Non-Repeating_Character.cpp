#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int freq[256] = {0};

    for(char ch : str)
        freq[ch]++;

    for(char ch : str) {
        if(freq[ch] == 1) {
            cout << ch;
            return 0;
        }
    }

    cout << "No Non-Repeating Character";

    return 0;
}