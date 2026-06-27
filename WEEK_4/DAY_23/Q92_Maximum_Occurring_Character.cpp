#include <iostream>
using namespace std;

int main() {

    string str;
    getline(cin, str);

    int freq[256] = {0};

    for(char ch : str)
        freq[ch]++;

    char ans;
    int maxi = 0;

    for(int i = 0; i < 256; i++) {

        if(freq[i] > maxi) {
            maxi = freq[i];
            ans = char(i);
        }
    }

    cout << ans;

    return 0;
}