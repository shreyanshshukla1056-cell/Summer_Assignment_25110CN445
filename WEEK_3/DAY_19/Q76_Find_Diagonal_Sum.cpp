#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int A[n][n];
    int sum = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> A[i][j];

    for(int i = 0; i < n; i++)
        sum += A[i][i];

    cout << sum;

    return 0;
}