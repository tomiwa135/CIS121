#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float compute_mpg(float miles, float gallons)
{
	float mpg;

	mpg = miles / gallons;

	return mpg;
}

float gasPrice(float gallons)
{
	float cost;

	cost = gallons * 3.50;

	return cost;
}

int main()
{
	string city;
	float miles, gallons, mpg, cost;
	float totalCostOfGas = 0;

	cout << "Enter destination city, ctl+z to stop: ";
	cin >> city;

	while (!cin.eof())
	{
		cout << "Enter miles travelled and gallons used: ";
		cin >> miles >> gallons;

		mpg = compute_mpg(miles, gallons);
		cost = gasPrice(gallons);

		cout << setprecision(2) << fixed;
		cout << city << " miles per gallon " << setw(8) << mpg << endl;
		cout << city << " gas cost $" << setw(8) << cost << endl;

		totalCostOfGas = totalCostOfGas + cost;

		cout << "Enter destination city, ctl+z to stop: ";
		cin >> city;
	}

	cout << endl;
	cout << "Total Cost of Gas: $" << setw(10) << totalCostOfGas << endl;

	system("pause");

	return 0;
}
