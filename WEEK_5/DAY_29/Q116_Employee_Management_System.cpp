#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

int main() {

    Employee emp[100];
    int n = 0;
    int choice;

    while (true) {

        cout << "\n1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
            cout << "Enter ID: ";
            cin >> emp[n].id;

            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, emp[n].name);

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            break;

        case 2:
            cout << "\nEmployee Records\n";

            for(int i = 0; i < n; i++) {
                cout << "ID: " << emp[i].id
                     << "\tName: " << emp[i].name
                     << "\tSalary: " << emp[i].salary
                     << endl;
            }
            break;

        case 3:
        {
            int id;
            cout << "Enter Employee ID: ";
            cin >> id;

            bool found = false;

            for(int i = 0; i < n; i++) {

                if(emp[i].id == id) {

                    cout << "ID: " << emp[i].id << endl;
                    cout << "Name: " << emp[i].name << endl;
                    cout << "Salary: " << emp[i].salary << endl;

                    found = true;
                    break;
                }
            }

            if(!found)
                cout << "Employee Not Found\n";

            break;
        }

        case 4:
            return 0;

        default:
            cout << "Invalid Choice\n";
        }
    }
}