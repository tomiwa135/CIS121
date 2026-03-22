#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string name;
	int numOfDeps;
	double tax, grossIncome, adjustedGrossIncome = 0;
	
	cout << "Enter the last name, number of dependents, and gross income delimited by a space: ";
	cin >> name >> numOfDeps >> grossIncome;

	adjustedGrossIncome = grossIncome - (numOfDeps * 12000);

	if (adjustedGrossIncome > 50000) 
	{
		tax = 0.20 * adjustedGrossIncome;
	}
	else if (adjustedGrossIncome <= 50000) 
	{
		tax = 0.10 * adjustedGrossIncome;
	}

	if (tax < 0) {
		tax = 100;
	}

	cout << "This is the name entered: " << name << endl;
	cout << setprecision(2) << fixed;
	cout << "This is the gross income: $" << grossIncome << endl;
	cout << "This is the adjusted gross income: $" << adjustedGrossIncome << endl;
	cout << "This is the total tax: $" << tax << endl;

	return 0;
}