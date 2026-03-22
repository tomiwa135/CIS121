#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double compute_fee(string dept, int course_code);

int main() {
	string dept;
	int course_code;
	int count = 0;
	double lab_fees;

	int total_fees = 0;

	cout << "Enter department(CIS, MAT, ENG, or others) and course code: ";
	cin >> dept >> course_code;
	cout << endl;

	while (!cin.eof()) {

		double fee = compute_fee(dept, course_code);

		cout << "This is the course code: " << course_code << endl;
		cout << "This is the department: " << dept << endl;
		cout << setprecision(2) << fixed;
		cout << "This is the lab fees due:         $" << setw(10) << fee << endl;
		cout << endl;

		total_fees = total_fees + fee;
		count++;

		cout << "Enter department(CIS, MAT, ENG, or others) and course code: ";
		cin >> dept >> course_code;
		cout << endl;
	}

	double avg_fee = total_fees / count;

	cout << setprecision(2) << fixed;
	cout << "This is the total fees for all the labs:  $" << total_fees << endl;
	cout << "This is the average fee:                  $" << avg_fee << endl;

	return 0;
}

double compute_fee(string dept, int course_code) {
	double lab_fee = 0;

	if (dept == "CIS")
	{
		if (course_code == 101) 
		{
			lab_fee = 50.00;
		}
		else if (course_code == 121) 
		{
			lab_fee = 100.00;
		}
		else 
		{
			lab_fee = 50.00;
		}
	}
	else if (dept == "MAT")
	{
		if (course_code == 111) 
		{
			lab_fee = 25.00;
		}
		else if (course_code == 112) 
		{
			lab_fee = 35.00;
		}
		else 
		{
			lab_fee = 50.00;
		}
	}
	else if (dept == "ENG")
	{
		if (course_code == 100) {
			lab_fee = 55.00;
		}
		else 
		{
			lab_fee = 50.00;
		}
	}
	else 
	{
		lab_fee = 50.00;
	}

	return lab_fee;
}
