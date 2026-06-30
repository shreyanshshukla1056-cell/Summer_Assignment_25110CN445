#include <iostream>
using namespace std;

int main() {

    int choice;

    do {

        cout << "\n===== MENU =====\n";
        cout << "1. Addition\n";
        cout << "2. Factorial\n";
        cout << "3. Prime Check\n";
        cout << "4. Exit\n";

        cin >> choice;

        switch(choice) {

        case 1:
        {
            int a, b;
            cin >> a >> b;
            cout << "Sum = " << a + b << endl;
            break;
        }

        case 2:
        {
            int n;
            cin >> n;

            long long fact = 1;

            for(int i = 1; i <= n; i++)
                fact *= i;

            cout << fact << endl;
            break;
        }

        case 3:
        {
            int n;
            cin >> n;

            bool prime = true;

            if(n <= 1)
                prime = false;

            for(int i = 2; i * i <= n; i++) {

                if(n % i == 0) {

                    prime = false;
                    break;
                }
            }

            if(prime)
                cout << "Prime\n";
            else
                cout << "Not Prime\n";

            break;
        }

        case 4:
            cout << "Thank You!\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while(choice != 4);

    return 0;
}