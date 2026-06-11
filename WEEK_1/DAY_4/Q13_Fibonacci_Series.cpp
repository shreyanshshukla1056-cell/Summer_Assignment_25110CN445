#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int prev_2 = 0, prev_1 = 1;
    for(int i = 1; i <= n; i++) {
        cout << prev_2 << " ";
        int current = prev_2 + prev_1;
        prev_2 = prev_1;
        prev_1 = current;
    }
    return 0;
}