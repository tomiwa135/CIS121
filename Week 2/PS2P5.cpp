#include <iostream>

using namespace std;

int main() {
	int price;
	double discount;
	double discountedPrice;
	double discountInPercent;

	cout << "Enter the price and the discount in decimal fashion delimited by a space: ";
	cin >> price >> discount;
	cout << endl;

	discountedPrice = price - (price * discount);
	discountInPercent = discount * 100;

	cout << "The item has a discount amount of " << discountInPercent << "% with a discounted price of $" << discountedPrice << endl;

	return 0;
}

