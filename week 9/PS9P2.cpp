#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

float battingAvg(int noOfHits, int noAtBats)
{
	float avg;

	avg = (float)noOfHits / noAtBats;

	return avg;
}

int main()
{
	string lname;
	int noOfHits, noAtBats;
	float avg;
	int count = 0;

	cout << "Enter player last name, ctl+z to stop: ";
	cin >> lname;

	while (!cin.eof())
	{
		cout << "Enter number of hits and at bats: ";
		cin >> noOfHits >> noAtBats;

		avg = battingAvg(noOfHits, noAtBats);

		cout << setprecision(3) << fixed;
		cout << lname << " batting average " << avg << endl;

		count = count + 1;

		cout << "Enter player last name, ctl+z to stop: ";
		cin >> lname;
	}

	cout << endl;
	cout << "Number of players " << setw(8) << count << endl;

	system("pause");

	return 0;
}
