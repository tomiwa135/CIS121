#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double weight;
	double ratePerPound;

	cout << "Enter the weight of recycle: ";
	cin >> weight;

	if (weight > 100)
	{
		ratePerPound = 0.50;
	}
	else if (weight >= 30 && weight <= 100)
	{
		ratePerPound = 0.25;
	}
	else if (weight >= 20 && weight <= 30)
	{
		ratePerPound = 0.20;
	} 
	else  if (weight < 20) 
	{
		ratePerPound = 0.10;
	}

	double rate = weight * ratePerPound;

	cout << "This is the rate: " << ratePerPound << endl;
	cout << "This is the weight: " << weight << "lbs" << endl;
	cout << setprecision(2) << fixed;
	cout << "This is the total given to the customer: $" << rate << endl;

	return 0;
}