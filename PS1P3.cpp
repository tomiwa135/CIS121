#include <iostream>
#include <string>

using namespace std;

int main() {
	int score;
	string lastName;

	cout << "Please enter your last name: " << endl;
	cin >> lastName;
	cout << "Entert the score you got: " << endl;
	cin >> score;

	cout << lastName << " has a score of " << score << endl;

	return 0;
}