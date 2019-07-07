#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    double netBalance, payment, d1, d2, aveDB, interest, monIR;

    cout << fixed << setprecision(2) << showpoint;
    
	cout << "Enter the net balance: ";
    cin >> netBalance;
    cout << "Enter the payment made: ";
    cin >> payment;
    cout << "Enter the number of days in the billing cycle: ";
    cin >> d1;
    cout << "Enter the number of days payment is made before billing cycle: ";
    cin >> d2;
    cout << "Enter the interest per month: ";
    cin >> monIR;

    aveDB = (netBalance * d1 - payment * d2) / d1;
    interest = aveDB * monIR;

    cout << "\nThe interest is: $ " << interest;
    
    getch();
    return 0;
}
