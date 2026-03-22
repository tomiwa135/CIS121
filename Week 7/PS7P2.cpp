#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	string lname;
	int noOfHits, noAtBats;

	int count = 0;
	
	cout << "Enter the players name (ctrl + z to stop): ";
	cin >> lname;
	cout << "Enter the first entry of number of hits and number at bats (ctrl + z to stop): ";
	cin >> noOfHits >> noAtBats;

	while (!cin.eof()) {
		double battingAvg = noOfHits / noAtBats;
		count = count + 1;

		cout << "This is the last name: " << lname << endl;
		cout << "This is the batting average for each player: " << battingAvg << endl;

		cout << "Enter the players name (ctrl + z to stop): ";
		cin >> lname;
		cout << "Enter the next entry of number of hits and number at bats (ctrl + z to stop): ";
		cin >> noOfHits >> noAtBats;
	}

	cout << endl;
	cout << "This is the count or number of total players entered: " << count << endl;

	return 0;
}