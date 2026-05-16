#include<iostream>
#include<iomanip>
using namespace std;

void fcompcost(int, float&, float&, float&, float&);

int main()
{
	int noOfWidgets;
	float costPerWidget, extendedPrice, salesTax, totalOrder;
	float totalOfAllOrders = 0;

	cout << "Enter number of widgets, ctl+z to stop: ";
	cin >> noOfWidgets;

	while (!cin.eof())
	{
		fcompcost(noOfWidgets, costPerWidget, extendedPrice, salesTax, totalOrder);

		totalOfAllOrders += totalOrder;

		cout << setprecision(2) << fixed;
		cout << "Number of Widgets: " << noOfWidgets << endl;
		cout << "Cost Per Widget:  $" << setw(8) << costPerWidget << endl;
		cout << "Extended Price:   $" << setw(8) << extendedPrice << endl;
		cout << "Sales Tax:        $" << setw(8) << salesTax << endl;
		cout << "Total Order:      $" << setw(8) << totalOrder << endl;

		cout << "Enter number of widgets, ctl+z to stop: ";
		cin >> noOfWidgets;
	}

	cout << endl;
	cout << "Total of all orders: $" << totalOfAllOrders << endl;

	return 0;
}

void fcompcost(int noOfWidgets, float& costPerWidget, float& extendedPrice, float& salesTax, float& totalOrder)
{
	if (noOfWidgets >= 10000)
		costPerWidget = 4.00f;
	else if (noOfWidgets >= 5000)
		costPerWidget = 5.00f;
	else
		costPerWidget = 10.00f;

	extendedPrice = costPerWidget * noOfWidgets;
	salesTax = 0.07f * extendedPrice;
	totalOrder = extendedPrice + salesTax;
}
