#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string name;
	double cost, warrantyCost;

	cout << "Please enter the name and the cost of the item delimited by a space: ";
	cin >> name >> cost;

	if (cost > 1000) 
	{
		warrantyCost = 0.10 * cost;
	}
	else if (cost <= 1000) 
	{
		warrantyCost = 0.05 * cost;
	}

	double total = warrantyCost + cost;

	cout << "This is the name entered: " << name << endl;
	cout << setprecision(2) << fixed;
	cout << "This is the cost of goods sold: $" << cost << endl;
	cout << "This is the warranty cost: $" << warrantyCost << endl;
	cout << "This is the total cost of goods sold: $" << total << endl;

	return 0;
}