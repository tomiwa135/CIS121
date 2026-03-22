#include <iostream>

using namespace std;

int main() {
	int n1;
	int n2;
	int n3;
	int result;

	cout << "Please enter three integers separated by a space: " << endl;
	cin >> n1 >> n2 >> n3;
	
	result = n1 + n2 + n3;

	cout << "Result of the sum of three numbers: " << result << endl;

	return 0;
}