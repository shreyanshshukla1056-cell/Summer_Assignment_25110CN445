#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){

        bool printed = false;

        for(int k = 0; k < i; k++){
            if(arr[k] == arr[i]) {
                printed = true;
                break;
            }
        }

        if(printed){
            continue;
        }

        int count = 0;

        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j])
                count++;
        }

        if(count > 1){
            cout << arr[i] << " ";
        }
    }

    return 0;
}