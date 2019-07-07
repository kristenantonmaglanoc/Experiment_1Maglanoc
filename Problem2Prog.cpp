#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	float mass, density, volume;
	cout << "Enter the mass of the object in grams: ";
	cin >> mass;
	if (mass<0) {
		cout << "\nInvalid Input!"; 
		getch();
		return 0;
	}
	
	
	cout << "\nEnter the density of the object in grams per cubic centimeters: ";
	cin >> density;
	if (density<0) {
		cout << "\nInvalid Input!"; 
		getch();
		return 0;
	}
		
	volume = mass/density;
	cout << "\nThe volume of the object is " << volume << " cubic centimeters";
	
getch();
return 0;
}
