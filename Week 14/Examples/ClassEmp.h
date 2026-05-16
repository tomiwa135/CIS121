#pragma once
#include<string>
using namespace std;
class ClassEmp
{
public:
	// define methods here
	// constructor method (function)
	ClassEmp();
	void First_Name(string fname);
	string First_Name();
	void Last_Name(string lname);
	string Last_Name();
	void Hours(float hours);
	void Rate(float r);
	float GrossPay();


protected:
	// define variables that protect data
	string p_fname;
	string p_lname;
	float p_hours;
	float p_rate;
	float p_grosspay;
};
void ClassEmp :: First_Name(string fname)
{
	p_fname = fname;
}
string ClassEmp::First_Name()
{
	return p_fname;
}
void ClassEmp::Last_Name(string lname)
{
	p_lname = lname;
}
string ClassEmp::Last_Name()
{
	return p_lname;
}
void ClassEmp::Hours(float hours)
{
	p_hours = hours;
}
void ClassEmp::Rate(float r)
{
	p_rate = r;
}
float ClassEmp::GrossPay()
{
	p_grosspay = p_hours * p_rate;

	return p_grosspay;
}
ClassEmp::ClassEmp()
{
	p_fname = "Donald";
	p_lname = "Duck";
	p_hours = 0.00f;
	p_rate = 0.00f;
}


