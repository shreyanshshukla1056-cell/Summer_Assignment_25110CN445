#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int vowels = 0, consonants = 0;

    for(char ch : str) {

        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if(ch >= 'a' && ch <= 'z') {

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants;

    return 0;
}