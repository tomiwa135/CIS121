#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double compute_up(char product_code);
double compute_shipping(char product_code);

int main() {
	string lname;
	char product_code;
	int qty;
	int count = 0;
	double unit_price, shipping;

	int total_pay = 0;

	cout << "Enter qty of products and product code: ";
	cin >> qty >> product_code;
	cout << endl;

	while (!cin.eof()) {

		double up = compute_up(product_code);
		double sh = compute_shipping(product_code);

		double ext_price = qty * up;
		double total = ext_price + sh;

		cout << "This is the product code: " << product_code << endl;
		cout << setprecision(2) << fixed;
		cout << "This is the unit price:           $" << setw(10) << up << endl;
		cout << "This is the shipping price:       $" << setw(10) << sh << endl;
		cout << "This is the extended price:       $" << setw(10) << ext_price << endl;
		cout << "This is the total:                $" << setw(10) << total << endl;
		cout << endl;

		total_pay = total_pay + total;
		count++;

		cout << "Enter qty of products and product code: ";
		cin >> qty >> product_code;
		cout << endl;
	}

	cout << setprecision(2) << fixed;
	cout << "This is the total after all products have been entered:  $" << total_pay << endl;
	cout << "This is the number of entries made: " << count << endl;

	return 0;
}

double compute_up(char product_code) {
	double up = 0;


	if (product_code == 'W')
	{
		up = 25.00;
	}
	else if (product_code == 'C')
	{
		up = 30.00;
	}
	else if (product_code == 'G')
	{
		up = 50.00;
	}

	return up;
}

double compute_shipping(char product_code) {
	double ship = 0;


	if (product_code == 'W')
	{
		ship = 2.00;
	}
	else if (product_code == 'C')
	{
		ship = 5.00;
	}
	else if (product_code == 'G')
	{
		ship = 7.00;
	}

	return ship;
}
