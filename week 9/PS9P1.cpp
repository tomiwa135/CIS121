#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float compute_total(int qty, float price)
{
	float total;

	total = qty * price;

	return total;
}

float discount_ten(float total)
{
	float rate, discountAmount, discountTotal;

	if (total > 10000.00)
		rate = 0.10;
	else
		rate = 0.05;

	discountAmount = rate * total;
	discountTotal = total - discountAmount;

	return discountTotal;
}

int main()
{
	int qty;
	float price, total, discountTotal;
	float totalOfAllSales = 0, totalOfAllDiscountsOffered = 0;

	cout << "Enter quantity and price, ctl+z to stop: ";
	cin >> qty >> price;

	while (!cin.eof())
	{
		total = compute_total(qty, price);
		discountTotal = discount_ten(total);

		cout << setprecision(2) << fixed;
		cout << "Total: $" << total << endl;
		cout << "Discount Total: $" << discountTotal << endl;

		totalOfAllSales = totalOfAllSales + total;
		totalOfAllDiscountsOffered = totalOfAllDiscountsOffered + discountTotal;

		cout << "Enter quantity and price, ctl+z to stop: ";
		cin >> qty >> price;
	}

	cout << endl;
	cout << "Total of All Sales:    $" << setw(10) << totalOfAllSales << endl;
	cout << "Total After Discounts: $" << setw(10) << totalOfAllDiscountsOffered << endl;

	system("pause");

	return 0;
}
