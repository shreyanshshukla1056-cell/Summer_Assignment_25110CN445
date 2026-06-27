#include <iostream>
using namespace std;

int main() {

    int marks[5];
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    double percentage = sum / 5.0;

    cout << "Percentage = " << percentage << endl;

    if(percentage >= 90)
        cout << "Grade A";
    else if(percentage >= 80)
        cout << "Grade B";
    else if(percentage >= 70)
        cout << "Grade C";
    else if(percentage >= 60)
        cout << "Grade D";
    else
        cout << "Grade F";

    return 0;
}