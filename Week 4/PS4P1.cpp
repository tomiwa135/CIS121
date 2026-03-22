#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int quantity;
	double unitPrice;
	double extendedPrice, tax, total;

	cout << "Enter the quantity of items bought: ";
	cin >> quantity;

	if (quantity >= 1000) 
	{
		unitPrice = 3.00;
	} 
	else if (quantity < 1000) 
	{
		unitPrice = 5.00;
	}

	extendedPrice = quantity * unitPrice;
	tax = 0.07 * extendedPrice;
	total = extendedPrice + tax;

	cout << "This is the quantity of items bought: " << quantity << endl;
	cout << setprecision(2) << fixed;
	cout << "This is the unit price: $" << unitPrice << endl;
	cout << "This is the extended price: $" << extendedPrice << endl;
	cout << "This is the tax: $" << tax << endl;
	cout << "This si the total: $" << total << endl;

	return 0;
}