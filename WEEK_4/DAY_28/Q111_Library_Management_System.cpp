#include <iostream>
using namespace std;

struct Book {
    int id;
    string name;
    bool issued;
};

int main() {

    Book books[100];
    int n = 0, choice;

    while(true) {

        cout << "\n1.Add Book\n";
        cout << "2.Display Books\n";
        cout << "3.Issue Book\n";
        cout << "4.Return Book\n";
        cout << "5.Exit\n";

        cin >> choice;

        if(choice == 1) {

            cout << "Book ID: ";
            cin >> books[n].id;

            cout << "Book Name: ";
            cin.ignore();
            getline(cin, books[n].name);

            books[n].issued = false;
            n++;
        }

        else if(choice == 2) {

            for(int i = 0; i < n; i++) {

                cout << books[i].id << " "
                     << books[i].name << " ";

                if(books[i].issued)
                    cout << "Issued";
                else
                    cout << "Available";

                cout << endl;
            }
        }

        else if(choice == 3) {

            int id;
            cin >> id;

            for(int i = 0; i < n; i++) {

                if(books[i].id == id && !books[i].issued) {

                    books[i].issued = true;
                    cout << "Book Issued\n";
                }
            }
        }

        else if(choice == 4) {

            int id;
            cin >> id;

            for(int i = 0; i < n; i++) {

                if(books[i].id == id && books[i].issued) {

                    books[i].issued = false;
                    cout << "Book Returned\n";
                }
            }
        }

        else
            break;
    }

    return 0;
}