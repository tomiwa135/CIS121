#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

double compute_mpg(int miles, int gallons){
	double mpg;

	mpg = miles / gallons;

	return mpg;
}

int main() {
	int miles, gallons;
	ifstream infile;
	double totalMiles = 0, totalGallons = 0;

	infile.open("trips.txt");

	while (!infile.eof()) {
		infile >> miles >> gallons;

		double mpg = compute_mpg(miles, gallons);

		cout << endl;
		cout << "This is the gallons used for the trips: " << gallons << endl;
		cout << "This is the miles travelled: " << miles << endl;
		cout << "This is the mpg: " << mpg << endl;
 
      totalMiles += miles;
		totalGallons += gallons;
	}

	cout << endl;
	cout << "This is the total miles travelled: " << totalMiles << endl;
	cout << "This is the total gallons used: " << totalGallons << endl;

	infile.close();

	system("pause");

	return 0;
}