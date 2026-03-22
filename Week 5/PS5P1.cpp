#include <iostream>
#include <string>

using namespace std;

int main() {
	string lname;
	int score;
	char grade;

	cout << "Please enter your last name: ";
	cin >> lname;
	cout << "Enter your score: ";
	cin >> score;

	if (score == 90) 
	{
		grade = 'A';
	}
	else if (score >= 80 && score <= 89) 
	{
		grade = 'B';
	}
	else if (score >= 70 && score <= 79) 
	{
		grade = 'C';
	}
	else if (score >= 60 && score <= 69) 
	{
		grade = 'D';
	}
	else 
	{
		grade = 'F';
	}

	cout << "This is the last name of the student: " << lname << endl;
	cout << "This is their letter grade: " << grade << endl;

	return 0;
}