#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int quantity;
	double unitPrice;
	double extendedPrice;

	cout << "Enter the quantity of items bought: ";
	cin >> quantity;
	cout << "Enter the unit price of the item (include cents): ";
	cin >> unitPrice;

	extendedPrice = quantity * unitPrice;

	cout << setprecision(2);

	cout << "Extended price of the items are $" << extendedPrice;

	return 0;
}