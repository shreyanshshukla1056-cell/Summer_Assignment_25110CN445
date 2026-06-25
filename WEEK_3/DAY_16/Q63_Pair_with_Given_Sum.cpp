#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, target;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> target;

    unordered_set<int> s;

    for(int i = 0; i < n; i++) {

        int need = target - arr[i];

        if(s.find(need) != s.end()) {
            cout << need << " " << arr[i];
            return 0;
        }

        s.insert(arr[i]);
    }

    cout << "No Pair";

    return 0;
}