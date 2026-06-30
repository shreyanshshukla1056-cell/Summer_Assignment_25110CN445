#include <iostream>
using namespace std;

struct Student {

    int roll;
    string name;
    float marks;
};

int main() {

    Student s[100];

    int n = 0, choice;

    while(true) {

        cout << "\n1.Add Student\n";
        cout << "2.Display Students\n";
        cout << "3.Search Student\n";
        cout << "4.Exit\n";

        cin >> choice;

        if(choice == 1) {

            cin >> s[n].roll;

            cin.ignore();
            getline(cin, s[n].name);

            cin >> s[n].marks;

            n++;
        }

        else if(choice == 2) {

            for(int i = 0; i < n; i++) {

                cout << s[i].roll << " "
                     << s[i].name << " "
                     << s[i].marks << endl;
            }
        }

        else if(choice == 3) {

            int roll;

            cin >> roll;

            bool found = false;

            for(int i = 0; i < n; i++) {

                if(s[i].roll == roll) {

                    cout << s[i].roll << " "
                         << s[i].name << " "
                         << s[i].marks << endl;

                    found = true;
                }
            }

            if(!found)
                cout << "Student Not Found\n";
        }

        else
            break;
    }

    return 0;
}