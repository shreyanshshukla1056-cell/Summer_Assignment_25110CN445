#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int prev_2 = 0, prev_1 = 1;
    if(n == 0){
        cout << 0;
        return 0;
    }
    for(int i = 2; i <= n; i++){
        int current = prev_2 + prev_1;
        prev_2 = prev_1;
        prev_1 = current;
    }
    cout << prev_1;
    return 0;
}