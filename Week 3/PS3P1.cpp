#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int exam1, exam2;
	double totalScore;

	cout << "Enter your scores for both exam 1 and exam 2 delimited by a space: ";
	cin >> exam1 >> exam2;

	totalScore = (0.60 * exam1) + (0.40 * exam2);

	cout << setprecision(2) << fixed;
	cout << "This is the total exam score for the student: " << totalScore << endl;
	
	system("pause");

	return 0;
}