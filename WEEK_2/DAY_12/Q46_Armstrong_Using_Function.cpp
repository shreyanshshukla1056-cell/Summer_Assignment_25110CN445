#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n){
    int digits = 0, temp = n;
    while(temp){
        digits++;
        temp /= 10;
    }
    temp = n;
    int sum = 0;
    while(temp){
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n;
    cin >> n;
    if(isArmstrong(n)){
        cout << "Armstrong";
    }
    else{
        cout << "Not Armstrong";
    }
    return 0;
}