#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int qty;
	double price, extendedPrice, discountPrice, discountAmount;

	double totalDiscountedPrice = 0.0;

	cout << "Enter the quantity and price (ctrl + z to stop): ";
	cin >> qty >> price;

	while (!cin.eof()) {
		if (qty > 1000) {
			discountPrice = price * 0.10;
		}
		else {
			discountPrice = price;
		}

		extendedPrice = qty * price;
		discountAmount = price - discountPrice;
		totalDiscountedPrice = totalDiscountedPrice + price;
	
		cout << setprecision(2) << fixed;
		cout << "This is the extended price:     $" << setw(8) << extendedPrice << endl;
		cout << "This is the quantity:            " << setw(8) << qty << endl;
		cout << "This is the individual price:   $" << setw(8) << price << endl;
		cout << "This is the discount price:     $" << setw(8) << discountPrice << endl;
		cout << "This is the discount amount:    $" << setw(8) << discountAmount << endl;
										 
		cout << "Enter the next quantity and price: (ctrl + z) to stop ";
		cin >> qty >> price;

	}

	cout << endl;
	cout << setprecision(2) << fixed;
	cout << "This is the total discounted price: $" << setw(8) << totalDiscountedPrice << endl;

	return 0;
}