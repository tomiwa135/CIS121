#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int pounds;
	double total, pricePerPound;

	cout << "Please enter the pounds of apple bought: ";
	cin >> pounds;

	if (pounds > 100) 
	{
		pricePerPound = 0.10;
	}
	else if (pounds >= 50 && pounds <= 100) 
	{
		pricePerPound = 0.25;
	}
	else if (pounds < 50) 
	{
		pricePerPound = 0.50;
	}

	total = pounds * pricePerPound;

	cout << "This is the price per pound: " << pricePerPound<< endl;
	cout << setprecision(2) << fixed;
	cout << "This is the total: $" << total << endl;

	return 0;
}