#include <iostream>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    bool seen[256] = {false};

    for(char ch : str) {

        if(!seen[ch]) {
            cout << ch;
            seen[ch] = true;
        }
    }

    return 0;
}