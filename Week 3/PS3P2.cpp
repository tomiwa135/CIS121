#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double stockPrice;
	int quantityOfStock;
	double stockValue;

	cout << "Enter the current stock price and the quantity of stocks bought: ";
	cin >> stockPrice >> quantityOfStock;

	stockValue = stockPrice * quantityOfStock;

	cout << setprecision(2) << fixed;
	cout << "This is the current value of the stock: $" << stockValue << endl;

	return 0;
}