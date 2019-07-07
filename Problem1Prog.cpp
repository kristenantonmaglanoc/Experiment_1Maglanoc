#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	float ticketPrice, numberOfTicketsSold, prem, side, box, gen; 

	cout << "Enter the number of premium tickets sold: ";
	cin >> prem;
	if (prem<0) {
		cout << "Invalid Input!";
		getch();
		return 0;
	}

	cout << "Enter the number of sideline tickets sold: ";
	cin >> side;
	if (side<0) {
		cout << "Invalid Input!";
		getch();
		return 0;
	}
	cout << "Enter the number of box tickets sold: ";
	cin >> box;
	if (box<0) {
		cout << "Invalid Input!";
		getch();
		return 0;
	}

	cout << "Enter the number of general admission tickets sold: ";
	cin >> gen;
	if (gen<0) {
		cout << "Invalid Input!";
		getch();
		return 0;
	}
	
	cout << "\n\nTicket price and amount sold: " << "\n\nPremium ($250): " << prem << "\n\nSideline ($100): " << side
		<< "\n\nBox ($50): " << box << "\n\nGeneral Admission ($25): " << gen;
	cout << "\n\nTotal number of tickets sold: " << fixed << setprecision(2) << prem+side+box+gen;
	cout << "\n\nTotal earnings from tickets sold: " << "$" << fixed << setprecision(2) << (prem*250)+(side*100)+(box*50)+(gen*25);	
	
getch();
return 0;
}
