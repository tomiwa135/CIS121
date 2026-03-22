#include <iostream>

using namespace std;

int main() {
	double length;
	double width;
	double area, circumference;

	cout << "Enter the length and width of the rectangle delimited by a space: ";
	cin >> length >> width;
	cout << endl;

	area = length * width;
	circumference = (2 * length) + (2 * width);

	cout << "Area of the rectangle: " << area << endl;
	cout << "Cir. of the rectangle: " << circumference << endl;

	return 0;
}

