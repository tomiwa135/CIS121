#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	char equipmentCode, dayCode;
	double cost;

	cout << "Enter the equipment code (A, B, or C): ";
	cin >> equipmentCode;
	cout << "Enter the code indicating a full day or a half day (H or F): ";
	cin >> dayCode;

	if (equipmentCode == 'A' && dayCode == 'F')
	{
		cost = 10.00;
	}
	else if (equipmentCode == 'A' && dayCode == 'H')
	{
		cost = 15.00;
	}
	else if (equipmentCode == 'B' && dayCode == 'F')
	{
		cost = 20.00;
	}
	else if (equipmentCode == 'B' && dayCode == 'H')
	{
		cost = 35.00;
	}
	else if (equipmentCode == 'C' && dayCode == 'H')
	{
		cost = 40.00;
	}
	else if (equipmentCode == 'C' && dayCode == 'F')
	{
		cost = 45.00;
	}
	else 
	{
		cost = 50.00;
	}

	cout << setprecision(2) << fixed;
	cout << "This is the rental cost of using the equipment: $" << cost << endl;

	return 0;
}