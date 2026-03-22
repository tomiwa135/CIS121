#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string lname;
	char jobCode;
	double hrsWorked, pay, employeePay, averagePay;

	double totalPay = 0;
	double count = 0;

	cout << "Enter the first line of last name, job code, and hours worked (ctrl+z to stop): ";
	cin >> lname >> jobCode >> hrsWorked;

	while (!cin.eof()) {
		if (jobCode == 'L') 
		{
			pay = 25;
		}
		else if (jobCode == 'A') 
		{
			pay = 30;
		}
		else if (jobCode == 'J') 
		{
			pay = 50;
		}

		if (hrsWorked > 40) 
		{
			employeePay = 40 * pay + (hrsWorked - 40) * pay * 1.5;
		}
		else
		{
			employeePay = pay * hrsWorked;
		}

		totalPay = totalPay + employeePay;
		count = count++;

		cout << "This is the last name: " << lname << endl;
		cout << "This is the job code: " << jobCode << endl;
		cout << "This is the hours worked: " << hrsWorked << endl;
		cout << setprecision(2) << fixed;
		cout << "This is the employee's pay: $" << setw(8) << employeePay << endl;

		cout << "Enter the next line of last name, job code, and hours worked (ctrl+z to stop): ";
		cin >> lname >> jobCode >> hrsWorked;
	}

	averagePay = totalPay / count;

	cout << setprecision(2) << fixed;
	cout << "This is the average pay: $" << setw(8) << averagePay << endl;
	cout << "This is the total number of entries made: " << count << endl;

	return 0;
}