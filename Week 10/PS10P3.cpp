#include<iostream>
#include<iomanip>
using namespace std;

void fcomptuition(float, float, float&, float&);

int main()
{
	string lname;
	float creditHours, financialAid, tuition, tuitionOwed;
	float totalTuition = 0;
	int count = 0;

	cout << "Enter student last name, ctl+z to stop: ";
	cin >> lname;

	while (!cin.eof())
	{
		cout << "Enter credit hours: ";
		cin >> creditHours;
		cout << "Enter financial aid: ";
		cin >> financialAid;

		fcomptuition(creditHours, financialAid, tuition, tuitionOwed);

		totalTuition += tuition;
		count++;

		cout << setprecision(2) << fixed;
		cout << "Student:      " << lname << endl;
		cout << "Tuition:      $" << setw(8) << tuition << endl;
		cout << "Tuition Owed: $" << setw(8) << tuitionOwed << endl;

		cout << "Enter student last name, ctl+z to stop: ";
		cin >> lname;
	}

	cout << endl;
	cout << "Total tuition owed:    $" << totalTuition << endl;
	cout << "Number of students:     " << count << endl;
	if (count > 0)
		cout << "Average tuition owed:  $" << totalTuition / count << endl;

	return 0;
}

void fcomptuition(float creditHours, float financialAid, float& tuition, float& tuitionOwed)
{
	tuition = creditHours * 250.00f;
	tuitionOwed = tuition - financialAid;
}
