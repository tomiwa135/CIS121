#include<iostream>
#include<iomanip>
#include<string>
#include "header1.h"
using namespace std;

int main()
{
	string first_name, last_name;
	Manager MyManager;
	float salary;

	// Dsiplay data in object set from constructor method
	cout << setprecision(2) << fixed;
	cout << "employee object defaults from constructor method" << endl;
	cout << "Employee First Name:     " << MyManager.employee_first_name() << endl;
	cout << "Employee Last Name:      " << MyManager.employee_last_name() << endl;
	cout << "Employee Annual Salary: $" << setw(10) << MyManager.employee_salary() << endl;
	cout << "Employee Bonus:         $" << setw(10) << MyManager.employee_bonus() << endl;
	cout << "Manager Long Term Bonus:$" << setw(10) << MyManager.Long_Term_Bonus() << endl;

	cout << "enter employee last name ";
	cin >> last_name;
	cout << "enter employee first name ";
	cin >> first_name;
	cout << "Enter employee salary ";
	cin >> salary;

	MyManager.employee_first_name(first_name);
	MyManager.employee_last_name(last_name);
	MyManager.employee_salary(salary);

	cout << setprecision(2) << fixed;
	cout << "employee loaded" << endl;
	cout << "Employee First Name:     " << MyManager.employee_first_name() << endl;
	cout << "Employee Last Name:      " << MyManager.employee_last_name() << endl;
	cout << "Employee Annual Salary: $" << setw(10) << MyManager.employee_salary() << endl;
	cout << "Employee Bonus:         $" << setw(10) << MyManager.employee_bonus() << endl;
	cout << "Manager Long Term Bonus:$" << setw(10) << MyManager.Long_Term_Bonus() << endl;
	// notice bonus was computed as part of the MyEmployee Object

	system("pause");

	return 0;
}