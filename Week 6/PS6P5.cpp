#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	char jobCode;
	int hrs;
	double rate = 0;

	cout << "Enter the job code: ";
	cin >> jobCode;
	cout << "Enter the hours worked: ";
	cin >> hrs;

	if (jobCode == 'L' && hrs > 40) 
	{
		rate = 50.00;
	}
	else if (jobCode == 'L' && hrs <= 40) 
	{
		rate = 40.00;
	}
	else if (jobCode == 'J' && hrs > 60) 
	{
		rate = 100.00;
	}
	else if (jobCode == 'J' && hrs <= 60) 
	{
		rate = 75.00;
	}
	else if (jobCode == 'A' && hrs > 40) 
	{
		rate = 25.00;
	}
	else if (jobCode == 'A' && hrs <= 40) 
	{
		rate = 20.00;
	}

	double grossPay = hrs * rate;

	cout << setprecision(2) << fixed;
	cout << "This is the gross pay: $" << grossPay << endl;

	return 0;
}
