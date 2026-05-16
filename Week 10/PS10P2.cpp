#include<iostream>
#include<iomanip>
using namespace std;

void fcomppostage(float, int, float&, float&, float&);

int main()
{
	float weight, postage, areaCharge, weightCharge;
	int zipCode;
	int count = 0;

	cout << "Enter weight and zip code, ctl+z to stop: ";
	cin >> weight >> zipCode;

	while (!cin.eof())
	{
		fcomppostage(weight, zipCode, postage, areaCharge, weightCharge);

		count++;

		cout << setprecision(2) << fixed;
		cout << "Area Charge:   $" << setw(8) << areaCharge << endl;
		cout << "Weight Charge: $" << setw(8) << weightCharge << endl;
		cout << "Postage:       $" << setw(8) << postage << endl;

		cout << "Enter weight and zip code, ctl+z to stop: ";
		cin >> weight >> zipCode;
	}

	cout << endl;
	cout << "Number of entries: " << count << endl;

	return 0;
}

void fcomppostage(float weight, int zipCode, float& postage, float& areaCharge, float& weightCharge)
{
	if (zipCode == 60171)
		areaCharge = 2.00f;
	else if (zipCode == 60172)
		areaCharge = 2.50f;
	else if (zipCode == 60635)
		areaCharge = 3.00f;
	else
		areaCharge = 5.00f;

	if (weight > 100)
		weightCharge = 0.02f * weight;
	else if (weight > 50)
		weightCharge = 0.03f * weight;
	else
		weightCharge = 0.05f * weight;

	postage = areaCharge + weightCharge;
}
