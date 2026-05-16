#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

void fcompinvestment(float, float, float, float&, float&);

int main()
{
	float invAmount, fiveYearRate, tenYearRate;
	float fiveYearAmount, tenYearAmount;

	cout << "Enter investment amount, 5-year rate, and 10-year rate, ctl+z to stop: ";
	cin >> invAmount >> fiveYearRate >> tenYearRate;

	while (!cin.eof())
	{
		fcompinvestment(invAmount, fiveYearRate, tenYearRate, fiveYearAmount, tenYearAmount);

		cout << setprecision(2) << fixed;
		cout << "Investment Amount:  $" << setw(10) << invAmount << endl;
		cout << "Five Year Amount:   $" << setw(10) << fiveYearAmount << endl;
		cout << "Ten Year Amount:    $" << setw(10) << tenYearAmount << endl;

		cout << "Enter investment amount, 5-year rate, and 10-year rate, ctl+z to stop: ";
		cin >> invAmount >> fiveYearRate >> tenYearRate;
	}

	return 0;
}

void fcompinvestment(float invAmount, float fiveYearRate, float tenYearRate, float& fiveYearAmount, float& tenYearAmount)
{
	fiveYearAmount = invAmount * pow(1 + fiveYearRate, 5);
	tenYearAmount = invAmount * pow(1 + tenYearRate, 10);
}
