#include <iostream>
using namespace std;

int main() {

    double basic;

    cin >> basic;

    double hra = basic * 0.20;
    double da = basic * 0.10;
    double pf = basic * 0.12;

    double gross = basic + hra + da - pf;

    cout << "Basic Salary : " << basic << endl;
    cout << "HRA : " << hra << endl;
    cout << "DA : " << da << endl;
    cout << "PF : " << pf << endl;
    cout << "Net Salary : " << gross << endl;

    return 0;
}