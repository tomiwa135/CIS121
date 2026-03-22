#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	string city;
	int miles;
	double gallons;

	int noOfTrips = 0;
	int totalMilesTravelled = 0;

	cout << "Enter the city, miles travelled, and gallons used (ctrl+z to stop): ";
	cin >> city >> miles >> gallons;

	while (!cin.eof()) {
		double mpg = miles / gallons;

		totalMilesTravelled = totalMilesTravelled + miles;
		noOfTrips = noOfTrips + 1;

		cout << "Here is the city destination: " << city << endl;
		cout << "This is the miles per gallon for the trip made: " << mpg << "mpg" << endl;

		cout << "Enter the next city, miles travelled, and gallons used (ctrl+z to stop): ";
		cin >> city >> miles >> gallons;
	}

	cout << endl;
	cout << "This is the total miles travelled: " << totalMilesTravelled << " miles" << endl;
	cout << "No of total trips taken: " << noOfTrips << endl;

	return 0;
}