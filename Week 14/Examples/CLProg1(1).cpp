#include<iostream>
#include<iomanip>
#include<string>
#include "header.h"
using namespace std;

int main()
{
	string first_name, last_name;
	Employee MyEmployee;
	float salary;

	// Dsiplay data in object set from constructor method
	cout << setprecision(2) << fixed;
	cout << "employee object defaults from constructor method" << endl;
	cout << "Employee First Name:     " << MyEmployee.employee_first_name() << endl;
	cout << "Employee Last Name:      " << MyEmployee.employee_last_name() << endl;
	cout << "Employee Annual Salary: $" << setw(10) << MyEmployee.employee_salary() << endl;
	cout << "Employee Bonus:         $" << setw(10) << MyEmployee.employee_bonus() << endl;

	cout << "enter employee last name ";
	cin >> last_name;
	cout << "enter employee first name ";
	cin >> first_name;
	cout << "Enter employee salary ";
	cin >> salary;

	MyEmployee.employee_first_name(first_name);
	MyEmployee.employee_last_name(last_name);
	MyEmployee.employee_salary(salary);

	cout << setprecision(2) << fixed;
	cout << "employee loaded" << endl;
	cout << "Employee First Name:     " << MyEmployee.employee_first_name() << endl;
	cout << "Employee Last Name:      " << MyEmployee.employee_last_name() << endl;
	cout << "Employee Annual Salary: $" << setw(10) << MyEmployee.employee_salary() << endl;
	cout << "Employee Bonus:         $" << setw(10) << MyEmployee.employee_bonus() << endl;
	// notice bonus was computed as part of the MyEmployee Object

	system("pause");

	return 0;
}