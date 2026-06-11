#include <iostream>
#include <cmath>
using namespace std;

int reverseNum(int n, int digits){
    if(n == 0)
        return 0;
    return (n % 10) * pow(10, digits - 1)
           + reverseNum(n / 10, digits - 1);
}

int main(){
    int n;
    cin >> n;
    int temp = n, digits = 0;
    while(temp) {
        digits++;
        temp /= 10;
    }
    cout << reverseNum(n, digits);
    return 0;
}