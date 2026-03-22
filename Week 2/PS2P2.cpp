#include <iostream>

using namespace std;

int main() {
	string lastName;
	int hours;
	double payRate;
	double grossPay;

	cout << "Enter your last name, hours, and pay rate separated by a space: ";
	cin >> lastName >> hours >> payRate;

	grossPay = hours * payRate;

	cout << lastName << " has a gross pay of $" << grossPay;

	return 0;
}