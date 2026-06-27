#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int length = 0;

    while(str[length] != '\0') {
        length++;
    }

    cout << length;

    return 0;
}