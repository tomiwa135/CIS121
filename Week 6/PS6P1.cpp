#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int widget;
	char status;
	double price, tax, total;

	cout << "Enter the quantity of widgets: ";
	cin >> widget;
	cout << "Enter the customer status (A, B, C, D): ";
	cin >> status;

	if (widget > 10000 && status == 'A') 
	{
		price = 10.00;		
	}
	else if (widget > 10000 && status == 'B') 
	{
		price = 12.00;
	}
	else if (widget >= 5000 && widget <= 10000 && status == 'C') 
	{
		price = 20.00;
	}
	else if (widget >= 5000 && widget <= 10000 && status == 'D') 
	{
		price = 22.00;
	}
	else 
	{
		price = 30.00;
	}

	double extendedPrice = widget * price;
	tax = 0.07 * extendedPrice;
	total = tax + extendedPrice;

	cout << setprecision(2) << fixed;
	cout << "This is the extended price: $" << setw(12) << extendedPrice << endl;
	cout << "This is the tax dollar amount: $" << setw(12) << tax << endl;
	cout << "This is the total: $" << setw(12) << total << endl;

	return 0;
}