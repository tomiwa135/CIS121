//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//double compute_total(int qty, double price)
//{
//	double total;
//
//	total = qty * price;
//
//	return total;
//}
//
//double discount_ten(double total) {
//	double rate, discountAmount, discountTotal;
//
//	if (total > 10000) {
//		rate = 0.10;
//	}
//	else if (total <= 10000) {
//		rate = 0.05;
//	}
//
//	discountAmount = rate * total;
//	discountTotal = total - discountAmount;
//
//	return discountTotal;
//}
//
//int main() {
//	int qty;
//	double price, total, discountTotal;
//
//	double totalOfAllSales = 0;
//	double totalOfAllDiscountsOffered = 0;
//
//	cout << "Please enter qty and price delimited by a space: ";
//	cin >> qty >> price;
//
//	while (!cin.eof()) {
//		total = compute_total(qty, price);
//		discountTotal = discount_ten(total);
//
//		cout << setprecision(2) << fixed;
//		cout << "This is the discount total: $" << discountTotal << endl;
//		cout << "This is the total: $" << total << endl;
//
//		totalOfAllDiscountsOffered += discountTotal;
//		totalOfAllSales += total;
//
//		cout << "Please enter qty and price delimited by a space (ctrl + z to stop): ";
//		cin >> qty >> price;
//	}
//
//	cout << endl;
//	cout << setprecision(2) << fixed;
//	cout << "This is the total of all sales: $" << totalOfAllSales << endl;
//	cout << "This is the total of all discounts offered $" << totalOfAllDiscountsOffered << endl;
//
//	system("pause");
//
//	return 0;
//}