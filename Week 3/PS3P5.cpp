#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double fixedCost, pricePerUnit, costPerUnit;
	double breakEven;

	cout << "Enter fixed cost, price per unit, and cost per unit delimited by a space: ";
	cin >> fixedCost >> pricePerUnit >> costPerUnit;

	if ((pricePerUnit - costPerUnit) != 0) 
	{
		breakEven = fixedCost / (pricePerUnit - costPerUnit);
		cout << "This is the break even point: " << breakEven << endl;
	}
	else 
	{
		cout << "The difference between price and cost cannot be zero or price cannot be less than cost" << endl;
	}

	return 0;
}