#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int numOfBooks;
	double costPerBook, shippingFee;
	double total = 0;

	cout << "Enter the number of books to order: ";
	cin >> numOfBooks;
	cout << "Enter the cost per book: $";
	cin >> costPerBook;
	
	total = numOfBooks * costPerBook;

	if (total > 50.00) 
	{
		shippingFee = 0;
	}
	else if (total <= 50.00) 
	{
		shippingFee = 25.00;
	}

	cout << setprecision(2) << fixed;
	cout << "The total: $" << total << endl;;
	cout << "The shipping charge: $" << shippingFee << endl;

	return 0;
}