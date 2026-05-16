#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void compute_sales(double msrp, double sale_price, double& savings, double& tax) {
	savings = msrp - sale_price;
	tax = 0.07 * sale_price;
}

int main() {
	string make, model;
	double msrp, sale_price;
	double sumOfSavings = 0;
	ifstream infile;
	double savings, tax;

	infile.open("auto.txt");

	while (!infile.eof()) {
		infile >> make >> model >> msrp >> sale_price;

		compute_sales(msrp, sale_price, savings, tax);

		cout << setprecision(2) << endl;
		cout << "This is the make of the car: " << make << endl;
		cout << "This is the model of the car: " << model << endl;
		cout << "This is the msrp of the car:                        $" << setw(8) << msrp << endl;
		cout << "This is the sale price of the car:                  $" << setw(8) << sale_price << endl;
		cout << "This is the savings on the car (msrp - sale price): $" << setw(8) << savings << endl;
		cout << "This is the sales tax :                             $" << setw(8) << tax << endl;
	    
      sumOfSavings += savings;
  }

	cout << endl;
	cout << setprecision(2) << endl;
	cout << "This is the sum of all the savings: $" << setw(8) << sumOfSavings << endl;

	infile.close();

	system("pause");

	return 0;
}