#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double salary, taxRate;

	cout << "Enter your annual salary: $";
	cin >> salary;

	if (salary > 100000)
	{
		taxRate = 0.40;
	}
	else if (salary >= 50000 && salary <= 100000)
	{
		taxRate = 0.35;
	}
	else if (salary < 50000)
	{
		taxRate = 0.25;
	}

	double tax = salary * taxRate;

	cout << setprecision(2) << fixed;
	cout << "This is the salary: $" << salary << endl;
	cout << "This is the tax rate: " << taxRate * 100 << "%" << endl;
	cout << "This is the tax on the salary: $" << tax << endl;

	return 0;
}