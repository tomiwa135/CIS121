#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double compute_tuition(int credits);

int main() {
	string lname;
	int credits;
	int count = 0;

	int total_tuition = 0;

	cout << "Enter last name of the student: ";
	cin >> lname;
	cout << "Enter the number of credits taken: ";
	cin >> credits;
	cout << endl;

	while (!cin.eof()) {

		double tuition = compute_tuition(credits);

		cout << "This is the last name of the student: " << lname << endl;
		cout << setprecision(2) << fixed;
		cout << "This is the student's tuition:       $" << setw(10) << tuition << endl;
		cout << endl;

		total_tuition = total_tuition + tuition;
		count++;

		cout << "Enter last name of the student: ";
		cin >> lname;
		cout << "Enter the number of credits taken: ";
		cin >> credits;
		cout << endl;
	}
   
  cout << setprecision(2) << fixed;
	cout << "This is the total tuition for all students:  $" << total_tuition << endl;
	cout << "This is the number of entries made: " << count << endl;

	return 0;
}

double compute_tuition(int credits) {
	double tuition;

	tuition = credits * 250.00;

	return tuition;
}

