#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int words = 1;

    for(char ch : str) {
        if(ch == ' ')
            words++;
    }

    cout << words;

    return 0;
}