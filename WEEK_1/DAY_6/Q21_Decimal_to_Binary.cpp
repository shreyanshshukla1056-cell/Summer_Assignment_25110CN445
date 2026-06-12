#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string binary = "";
    while(n > 0) {
        binary = char((n % 2) + '0') + binary;
        n /= 2;
    }
    cout << binary;
    return 0;
}