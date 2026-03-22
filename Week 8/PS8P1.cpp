#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double compute_mpg(int miles, double gallons);

int main() {
	string city;
	int miles;
	int count = 0;
	double gallons;

	int total_miles = 0;

	cout << "Enter city travelled to: ";
	cin >> city;
	cout << "Enter miles travelled: ";
	cin >> miles;
	cout << "Enter gallons used (ctrl + z to stop): ";
	cin >> gallons;
	cout << endl;

	while (!cin.eof()) {
	
		double mpg = compute_mpg(miles, gallons);

		cout << "This is the city travelled to: " << city << endl;
		cout << setprecision(2) << fixed;
		cout << "This is the mpg: " << mpg << " mpg\n" << endl;

		total_miles = total_miles + miles;
		count++;

		cout << "Enter city travelled to: ";
		cin >> city;
		cout << "Enter miles travelled: ";
		cin >> miles;
		cout << "Enter gallons used (ctrl + z to stop): ";
		cin >> gallons;
		cout << endl;
	}
  
	cout << "This is the total miles for all trips: " << total_miles << " miles" << endl;
	cout << "This is the number of trips taken: " << count << " trips" << endl;
	
	return 0;
}

double compute_mpg(int miles, double gallons) {
	double mpg; //to prevent re-definition of formal parameters error, do not initialize formal parameters in the function

	mpg = miles / gallons;

	return mpg;
}