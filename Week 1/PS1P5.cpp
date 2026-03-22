#include <iostream>

using namespace std;

int main() {
	int num1;
	int num2;
	int sum;
	int product;
	int diff;

	cout << "Please enter the two numbers to be calculated: " << endl;
	cin >> num1 >> num2;

	sum = num1 + num2;
	product = num1 * num2;
	diff = num1 - num2;

	cout << "The sum of the two numbers: " << sum << endl;
	cout << "The product of the two numbers " << product << endl;
	cout << "The difference of the two numbers " << diff << endl;

	return 0;
}