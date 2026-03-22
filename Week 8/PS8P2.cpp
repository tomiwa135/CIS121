#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double compute_pay(char job_code, int hours);

int main() {
	string lname;
	char job_code;
	int count = 0;
	int hours;

	int total_pay = 0;

	cout << "Enter last name of the employee: ";
	cin >> lname;
	cout << "Enter job code (L, A, or J): ";
	cin >> job_code;
	cout << "Enter hours worked (ctrl + z to stop): ";
	cin >> hours;
	cout << endl;

	while (!cin.eof()) {

		double pay = compute_pay(job_code, hours);

		cout << "This is the last name of the employee: " << lname << endl;
		cout << setprecision(2) << fixed;
		cout << "This is the employee's pay:       $" << setw(10) << pay << endl;
		cout << endl;

		total_pay = total_pay + pay;
		count++;

		cout << "Enter last name of the employee: ";
		cin >> lname;
		cout << "Enter job code (L, A, or J): ";
		cin >> job_code;
		cout << "Enter hours worked (ctrl + z to stop): ";
		cin >> hours;
		cout << endl;
	}

	double avg_pay = total_pay / count;
  
  cout << setprecision(2) << fixed;
	cout << "This is the avg pay for all employees:  $" << avg_pay << endl;
	cout << "This is the number of entries made: " << count << endl;

	return 0;
}

double compute_pay(char job_code, int hours) {
	double pay;
	double rate = 0;

	if (job_code == 'L') 
	{
		rate = 25.00;	
	}
	else if (job_code == 'A') 
	{
		rate = 30.00;
	}
	else if (job_code == 'J') 
	{
		rate = 50.00;
	}

	if (hours > 40) 
	{
		pay = (hours - 40) * rate * 1.5 + hours * rate;
	}
	else 
	{
		pay = hours * rate;
	}

	return pay;
}

