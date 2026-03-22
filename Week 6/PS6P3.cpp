#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int noOfConcertTickets;
	char location;
	double cpt;

	cout << "Enter a location code (H or L): ";
	cin >> location;
	cout << "Enter the number of concert tickets bought: ";
	cin >> noOfConcertTickets;

	if (noOfConcertTickets > 25 || location == 'H')
	{
		cpt = 30.00;
	}
	else if (noOfConcertTickets > 25 || location == 'I')
	{
		cpt = 40.00;
	}
	else
	{
		cpt = 50.00;
	}

	double total = cpt * noOfConcertTickets;

	cout << "This is the number of concert tickets bought: " << noOfConcertTickets << endl;
	cout << "This is the cost per ticket: $" << cpt << endl;
	cout << "This is the total: $" << total << endl;

	return 0;
}