#include<iostream>
#include<iomanip>
using namespace std;

void fcompcost(float, float, float&, float&, float&);

int main()
{
	float qty, price, total, tax, totalOrder;
	float totalOfAllOrders = 0, totalTax = 0;

	cout << "Enter quantity and price, ctl+z to stop: ";
	cin >> qty >> price;

	while (!cin.eof())
	{
		fcompcost(qty, price, total, tax, totalOrder);

		totalOfAllOrders += total;
		totalTax += tax;

		cout << setprecision(2) << fixed;
		cout << "Total:       $" << setw(8) << total << endl;
		cout << "Tax:         $" << setw(8) << tax << endl;
		cout << "Total Order: $" << setw(8) << totalOrder << endl;

		cout << "Enter quantity and price, ctl+z to stop: ";
		cin >> qty >> price;
	}

	cout << endl;
	cout << "Total of all orders: $" << totalOfAllOrders << endl;
	cout << "Total tax:           $" << totalTax << endl;

	return 0;
}

void fcompcost(float qty, float price, float& total, float& tax, float& totalOrder)
{
	total = qty * price;
	tax = 0.07f * total;
	totalOrder = total + tax;
}
