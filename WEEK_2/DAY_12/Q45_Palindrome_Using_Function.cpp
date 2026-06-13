#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int temp = n, rev = 0;
    while(temp > 0){
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main(){
    int n;
    cin >> n;
    if(isPalindrome(n)){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome";
    }
    return 0;
}