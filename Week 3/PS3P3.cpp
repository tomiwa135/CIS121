#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double total, tip, totalWithTip;

	cout << "Please enter the total for the meal: $";
	cin >> total;

	tip = 0.15 * total;
	totalWithTip = tip + total;

	cout << setprecision(2) << fixed;
	cout << "This is the meal total: $" << total << endl;
	cout << "This is the 15% tip fpr the meal: $" << tip << endl;
	cout << "This is the total with tip: $" << totalWithTip << endl;

	return 0;
}