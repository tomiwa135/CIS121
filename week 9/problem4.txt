#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float payrate(char code)
{
	float rate;

	if (code == 'L' || code == 'l')
		rate = 25.00;
	else if (code == 'A' || code == 'a')
		rate = 30.00;
	else if (code == 'J' || code == 'j')
		rate = 50.00;

	return rate;
}

float grossPay(float rate, float hours)
{
	float pay;

	if (hours > 40)
		pay = (hours - 40) * rate * 1.5 + 40 * rate;
	else
		pay = hours * rate;

	return pay;
}

int main()
{
	string lname;
	char code;
	float hours, rate, pay;
	float totalGrossPay = 0;

	cout << "Enter employee last name, ctl+z to stop: ";
	cin >> lname;

	while (!cin.eof())
	{
		cout << "Enter job code (L/A/J) and hours worked: ";
		cin >> code >> hours;

		rate = payrate(code);
		pay = grossPay(rate, hours);

		cout << setprecision(2) << fixed;
		cout << lname << " gross pay $" << setw(10) << pay << endl;

		totalGrossPay = totalGrossPay + pay;

		cout << "Enter employee last name, ctl+z to stop: ";
		cin >> lname;
	}

	cout << endl;
	cout << "Total of All Gross Pay: $" << setw(10) << totalGrossPay << endl;

	system("pause");

	return 0;
}
