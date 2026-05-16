#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double compute_mpg(int miles, double gallons);
double gas_price(double gallons);

int main() {
	string city;
	int miles;
	double gallons, mpg, cost_of_gas;
	double totalCostOfGas = 0;

	cout << "Enter the city, miles, and gallons used for the trip: ";
	cin >> city >> miles >> gallons;

	while (!cin.eof()) {
		mpg = compute_mpg(miles, gallons);
		cost_of_gas = gas_price(gallons);

		cout << "This is the city travelled to: " << city << endl;
		cout << "This is the miles per gallon: " << mpg << endl;
		cout << setprecision(2) << fixed;
		cout << "This is the gas cost: $" << cost_of_gas << endl;

		totalCostOfGas = totalCostOfGas + cost_of_gas;

		cout << "Enter the city, miles, and gallons used for the trip (ctrl + z to stop): " << endl;
		cin >> city >> miles >> gallons;
	}

	cout << endl;
	cout << "This si the total cost of gas for all the trips: " << totalCostOfGas << endl;

	system("pause");

	return 0;
}

double compute_mpg(int miles, double gallons) {
	double mpg;

	mpg = miles / gallons;

	return mpg;
}

double gas_price(double gallons) {
	double cost;

	cost = gallons * 3.50;

	return cost;
}