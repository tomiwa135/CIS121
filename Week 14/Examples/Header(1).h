#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:
	Employee();
	void employee_first_name(string);
	string employee_first_name();
	void employee_last_name(string);
	string employee_last_name();
	void employee_salary(float);
	float employee_salary();
	float employee_bonus();

//private: can not be inherited, pretected can be inherited
protected:
	string lname, fname;
	float empl_bonus,empl_salary;
};
Employee::Employee()
{
	fname = "Donald";
	lname = "Duck";
	empl_bonus = 0.00f;
	empl_salary = 0.00f;
}
void Employee::employee_salary(float e_salary)
{
	empl_salary = e_salary;
}
float Employee::employee_salary()
{
	return empl_salary;
}
float Employee::employee_bonus()
{
	empl_bonus = empl_salary * 0.10f;

	return empl_bonus;
}
void Employee::employee_first_name(string first)
{
	fname = first;
}
string Employee::employee_first_name()
{
	return fname;
}
void Employee::employee_last_name(string last)
{
	lname = last;
}
string Employee::employee_last_name()
{
	return lname;
}
