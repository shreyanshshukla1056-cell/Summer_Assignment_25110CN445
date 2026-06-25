#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    int element = arr[0];
    int maxFreq = 0;

    for(auto x : mp){
        if(x.second > maxFreq){
            maxFreq = x.second;
            element = x.first;
        }
    }

    cout << element;

    return 0;
}