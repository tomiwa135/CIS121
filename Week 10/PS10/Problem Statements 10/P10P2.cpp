#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void compute_postage(double weight, string code, double& postalCharge, double& areaCharge, double& weightCharge);


int main() {
	double weight;
	string code;
	double postageCharge, areaCharge, weightCharge;

	int count = 0;

	cout << "Please enter the weight and the zip code: ";
	cin >> weight >> code;

	while (!cin.eof()) {
		compute_postage(weight, code, postageCharge, areaCharge, weightCharge);

		cout << setprecision(2) << fixed;
		cout << "This is the postage charge: $" <<  setw(8) << postageCharge << endl;
		cout << "This is the area charge:    $" << setw(8) << areaCharge << endl;
		cout << "This is the weight charge:  $" << setw(8) << weightCharge << endl;
	    
		count++;

		cout << "Please enter the weight and the zip code: ";
		cin >> weight >> code;

	}

	cout << "These are the number of entries made: " << count << endl;

	system("pause");

	return 0;
}

void compute_postage(double weight, string code, double& postalCharge, double& areaCharge, double& weightCharge) {
	if (code == "60171") 
	{
		areaCharge = 2.00;
	}
	else if (code == "60172") 
	{
		areaCharge = 2.50;
	}
	else if (code == "60635") 
	{
		areaCharge = 3.00;
	}
	else 
	{
		areaCharge = 5.00;
	}

	if (weight > 100.00) {
		weightCharge = 0.02 * weight;
	}
	else if (weight > 50.00) {
		weightCharge = 0.03 * weight;
	}
	else {
		weightCharge = 0.05 * weight;
	}

	postalCharge = weightCharge + areaCharge;
}