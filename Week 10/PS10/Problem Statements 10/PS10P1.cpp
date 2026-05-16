//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//void compute_total(int qty, double price, double& total, double& tax, double& total_order) {
//	total = qty * price;
//
//	tax = 0.07 * total;
//
//	total_order = total + tax;
//}
//
//int main() {
//	int qty;
//	double price, total;
//	double totalOfAllOrders = 0;
//	double totalTax = 0;
//	double tax, total_order;
//
//	cout << "Enter the qty and the price of all goods bought (ctrl + z to stop): ";
//	cin >> qty >> price;
//
//	while (!cin.eof()) {
//		compute_total(qty, price, total, tax, total_order);
//
//		totalOfAllOrders += total_order;
//		totalTax += tax;
//
//		cout << setprecision(2) << fixed;
//		cout << "This is the total of the order:  $" << setw(8) << total << endl;
//		cout << "This is the tax for the order:   $" << setw(8) << tax << endl;
//		cout << "This is the total including tax: $" << setw(8) << total_order << endl;
//
//		cout << "Enter the qty and the price of all goods bought (ctrl + z to stop): ";
//		cin >> qty >> price;
//	}
//
//	cout << setprecision(2) << fixed;
//	cout << "This is the total of all the orders combined:    $" << setw(8) << totalOfAllOrders << endl;
//	cout << "This is the total taxes for the orders combined: $" << setw(8) << totalTax << endl;
//
//	return 0;
//}