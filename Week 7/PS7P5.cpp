#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string lname;
	int creditHours;
	char districtCode;
	float tuitionOwed, tuition;

	int totalCreditHours = 0;
	float totalAmountOfTuition = 0.0f;
	int count = 0;

	cout << "Enter the first line of name, credit hours, and district code: (Ctrl + z to stop): ";
	cin >> lname >> creditHours >> districtCode;

	while (!cin.eof()) 
	{

		if (districtCode == 'I') 
		{
			tuition = 250.00f;
		}
		else if (districtCode == 'O') 
		{
			tuition = 550.00f;
		}

		tuitionOwed = tuition * creditHours;
		
		totalAmountOfTuition = totalAmountOfTuition + tuitionOwed;
		totalCreditHours = totalCreditHours + creditHours;
		count++;

		cout << "This is the last name: " << lname << endl;
		cout << setprecision(2) << fixed;
		cout << "This is the tuition owed: $" << setw(8) << endl;

		cout << "Enter the next line of name, credit hours, and district code: (Ctrl + z to stop): ";
		cin >> lname >> creditHours >> districtCode;
	}

	cout << "This is the total amount of tuition owed by all the students: $" << totalAmountOfTuition << endl;
	cout << "This is the total credit hours taken: " << totalCreditHours << endl;
	cout << "This is the total number of students: " << count << endl;

	return 0;
}