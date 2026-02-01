#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName;
	string lastName;

	cout << "Please enter your first name: " << endl;
	cin >> firstName;
	cout << "Please enter your last name: " << endl;
	cin >> lastName;

	cout << "Hello " << lastName << endl;

	system("pause");

	return 0;
}