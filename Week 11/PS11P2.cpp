#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

double compute_price(int qty, double cost) {
	double extendedPrice;

	extendedPrice = qty * cost;

	return extendedPrice;
}

int main() {
	string item;
	int qty;
	double cost;
	ifstream infile;
	double totalExtendedPrice = 0, totalTax = 0, totalReceipt = 0;

	infile.open("grocery.txt");

	while (!infile.eof()) {
		infile >> item >> qty >> cost;

		double extendedPrice = compute_price(qty, cost);

		cout << endl;
		cout << "This is the item bought: " << item << endl;
		cout << "This is the quantity: " << qty << endl;
		cout << "This is the cost per item: " << cost << endl;
		cout << "This is the extended price: $" << setprecision(2) << fixed << setw(8) << extendedPrice << endl;

		totalExtendedPrice += extendedPrice;
	}

	totalTax = 0.07 * totalExtendedPrice;
	totalReceipt = totalTax + totalExtendedPrice;

	cout << endl;
	cout << "This is the total taxes: $" << setprecision(2) << fixed << setw(8) <<  totalTax << endl;
	cout << "This is the total extended price: $" << setprecision(2) << fixed << setw(8) << totalExtendedPrice << endl;
	cout << "This is the total receipt for the purchase: $" << setprecision(2) << fixed << setw(8) << totalReceipt << endl;

	infile.close();

	system("pause");

	return 0;
}