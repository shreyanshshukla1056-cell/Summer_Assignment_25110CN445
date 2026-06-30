#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int secret = rand() % 100 + 1;

    int guess;

    cout << "Guess a number between 1 and 100\n";

    while(true) {

        cin >> guess;

        if(guess == secret) {

            cout << "Correct Guess!";
            break;
        }

        else if(guess < secret)
            cout << "Too Low\n";

        else
            cout << "Too High\n";
    }

    return 0;
}