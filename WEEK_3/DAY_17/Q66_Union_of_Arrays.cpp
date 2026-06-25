#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    set<int> s;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    for(int x : s)
        cout << x << " ";

    return 0;
}