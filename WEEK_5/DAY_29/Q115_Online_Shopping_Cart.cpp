#include <iostream>
using namespace std;

int main() {

    string product[100];
    double price[100];

    int n = 0;
    int choice;

    while(true) {

        cout << "\n1.Add Product\n";
        cout << "2.View Cart\n";
        cout << "3.Total Bill\n";
        cout << "4.Exit\n";

        cin >> choice;

        if(choice == 1) {

            cin >> product[n];
            cin >> price[n];

            n++;
        }

        else if(choice == 2) {

            for(int i = 0; i < n; i++) {

                cout << product[i]
                     << " "
                     << price[i]
                     << endl;
            }
        }

        else if(choice == 3) {

            double total = 0;

            for(int i = 0; i < n; i++)
                total += price[i];

            cout << "Total Bill = " << total << endl;
        }

        else
            break;
    }

    return 0;
}