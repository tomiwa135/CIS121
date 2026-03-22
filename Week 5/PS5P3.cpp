#include <iostream>
#include <string>
#include <iomanip>	

using namespace std;

int main() {
	string lname;
	int hours;
	char code;
	double payRate, total;

	cout << "Please enter the employees last name, hours worked, and job code (E, J, or A) delimited by a space: ";
	cin >> lname >> hours >> code;

	if (code == 'E') 
	{
		payRate = 25.00;
	}
	else if (code == 'J') 
	{
		payRate = 20.00;
	}
	else if (code == 'A') 
	{
		payRate = 15.00;
	}

	total = hours * payRate;

	cout << "This is the last name: " << lname << endl;
	cout << "This is the hours worked: " << hours << endl;
	cout << setprecision(2) << fixed;
	cout << "This is the pay rate: $" << payRate << endl;
	cout << "This is the total: $" << total << endl;

	return 0;
}