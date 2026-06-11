#include <iostream>
using namespace std;
int main(){
    int start, end;
    cin >> start >> end;
    for(int num = start; num <= end; num++){
        if(num <= 1){
            continue;
        }
        bool prime = true;
        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                prime = false;
                break;
            }
        }
        if(prime){
            cout << num << " ";
        }
    }
    return 0;
}