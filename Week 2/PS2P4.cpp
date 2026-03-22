#include <iostream>

using namespace std;

const double TUITION = 250.00;
const double LAB_FEE = 100.00;

int main() {
	string lastName;
	int creditsTaken;
	double totalTuition;

	cout << "Enter your last name and number of credits taken delimited by a space: ";
	cin >> lastName >> creditsTaken;
	cout << endl;

	totalTuition = (creditsTaken * TUITION) + LAB_FEE;

	cout << "This is how much " << lastName << " has in total tuition: $" << totalTuition << endl;

	return 0;
}