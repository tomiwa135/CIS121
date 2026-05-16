#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float tuition(char code)
{
	float cost;

	if (code == 'I' || code == 'i')
		cost = 250.00;
	else if (code == 'O' || code == 'o')
		cost = 550.00;

	return cost;
}

float compute_tuition(float cost, int creditHours)
{
	float tuitionCost;

	tuitionCost = cost * creditHours;

	return tuitionCost;
}

int main()
{
	string lname;
	int creditHours;
	char code;
	float cost, tuitionCost;
	float totalTuition = 0;

	cout << "Enter student last name, ctl+z to stop: ";
	cin >> lname;

	while (!cin.eof())
	{
		cout << "Enter credit hours and district code (I/O): ";
		cin >> creditHours >> code;

		cost = tuition(code);
		tuitionCost = compute_tuition(cost, creditHours);

		cout << setprecision(2) << fixed;
		cout << lname << " tuition $" << setw(10) << tuitionCost << endl;

		totalTuition = totalTuition + tuitionCost;

		cout << "Enter student last name, ctl+z to stop: ";
		cin >> lname;
	}

	cout << endl;
	cout << "Total of All Tuition Costs: $" << setw(10) << totalTuition << endl;

	system("pause");

	return 0;
}
