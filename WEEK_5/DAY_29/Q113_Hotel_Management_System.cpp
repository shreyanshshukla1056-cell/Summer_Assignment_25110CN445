#include <iostream>
using namespace std;

int main() {

    bool rooms[10] = {false};

    int choice;

    while(true) {

        cout << "\n1.Book Room\n";
        cout << "2.View Rooms\n";
        cout << "3.Exit\n";

        cin >> choice;

        if(choice == 1) {

            int room;
            cin >> room;

            if(room >= 1 && room <= 10 && !rooms[room - 1]) {

                rooms[room - 1] = true;
                cout << "Room Booked\n";
            }

            else
                cout << "Room Not Available\n";
        }

        else if(choice == 2) {

            for(int i = 0; i < 10; i++) {

                cout << "Room " << i + 1 << " : ";

                if(rooms[i])
                    cout << "Booked\n";
                else
                    cout << "Available\n";
            }
        }

        else
            break;
    }

    return 0;
}