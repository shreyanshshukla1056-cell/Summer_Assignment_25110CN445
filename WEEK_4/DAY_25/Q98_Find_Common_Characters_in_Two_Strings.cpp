#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int freq[256] = {0};

    for(char ch : s1)
        freq[ch] = 1;

    for(char ch : s2) {
        if(freq[ch]) {
            cout << ch << " ";
            freq[ch] = 0;
        }
    }

    return 0;
}