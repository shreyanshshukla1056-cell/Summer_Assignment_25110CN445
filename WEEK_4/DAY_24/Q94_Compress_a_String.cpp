#include <iostream>
using namespace std;

int main() {

    string str;
    cin >> str;

    int n = str.length();

    for(int i = 0; i < n; ) {

        char ch = str[i];
        int count = 0;

        while(i < n && str[i] == ch) {
            count++;
            i++;
        }

        cout << ch << count;
    }

    return 0;
}