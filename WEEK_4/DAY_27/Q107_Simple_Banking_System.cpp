#include <iostream>
using namespace std;

int main() {

    double balance = 0;
    int choice;
    double amount;

    while(true) {

        cout << "\n1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance\n";
        cout << "4. Exit\n";

        cin >> choice;

        if(choice == 1) {

            cin >> amount;
            balance += amount;
        }

        else if(choice == 2) {

            cin >> amount;

            if(amount <= balance)
                balance -= amount;
            else
                cout << "Insufficient Balance\n";
        }

        else if(choice == 3) {

            cout << "Balance = " << balance << endl;
        }

        else if(choice == 4) {

            break;
        }

        else {

            cout << "Invalid Choice\n";
        }
    }

    return 0;
}