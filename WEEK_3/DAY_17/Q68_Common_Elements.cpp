#include <iostream>
#include <set>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    set<int> a, b;

    for(int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }

    for(int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        b.insert(x);
    }

    for(int i = 0; i < n3; i++) {
        int x;
        cin >> x;

        if(a.count(x) && b.count(x))
            cout << x << " ";
    }

    return 0;
}