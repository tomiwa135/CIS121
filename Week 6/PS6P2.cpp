#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int partNo, quantity;
	double cpu, total;

	cout << "Enter the part number (10 or 99): ";
	cin >> partNo;
	cout << "Enter the quantity: ";
	cin >> quantity;

	if (partNo == 10 && quantity > 1000) {
		cpu = 1.00;
	}
	else if (partNo == 99 && quantity > 500) {
		cpu = 2.00;
	}
	else {
		cpu = 5.00;
	}

	total = cpu * quantity;

	cout << "This is the part number: " << partNo << endl;
	cout << "This is the cost per unit: $" << cpu << endl;
	cout << "This is the total: $" << total << endl;

	return 0;
}