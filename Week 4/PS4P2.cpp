#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	char item;
	int quantity;
	double unitPrice = 0;
	double extendedPrice;

	cout << "Enter an item ('A' or 'B'): ";
	cin >> item;
	cout << "Enter the quantity of items: ";
	cin >> quantity;

	if (item == 'A') {
		unitPrice = 10.00;
	} else if (item == 'B') {
		unitPrice = 20.00;
	}

	extendedPrice = unitPrice * quantity;

	cout << "This is the item: " << item << endl;
	cout << setprecision(2) << fixed;
	cout << "This is the unit price of the item: $" << unitPrice << endl;
	cout << "This is the extended price: $" << extendedPrice << endl;

	return 0;
}