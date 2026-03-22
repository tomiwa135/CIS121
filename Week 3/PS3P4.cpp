#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float purchasePrice, stockCurrentPrice, rate;

	cout << "Enter the purchase price and current price of the stock delimited by a space: ";
	cin >> purchasePrice >> stockCurrentPrice;

	rate = (stockCurrentPrice - purchasePrice) / (purchasePrice * 100);

	if (rate > 0) 
	{
		cout << "This is the increase in percentage change of the stock changed by " << rate << "%" << endl;
	}
	else if (rate < 0) 
	{
		cout << "This is the decrease in percentage change of the stock changed by " << rate << "%" << endl;
	}
	else 
	{
		cout << "No change in stock" << endl;
	}

	system("pause");

	return 0;
}