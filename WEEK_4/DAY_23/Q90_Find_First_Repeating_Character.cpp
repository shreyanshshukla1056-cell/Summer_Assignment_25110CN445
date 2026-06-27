#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int freq[256] = {0};

    for(char ch : str) {
        freq[ch]++;

        if(freq[ch] == 2) {
            cout << ch;
            return 0;
        }
    }

    cout << "No Repeating Character";

    return 0;
}