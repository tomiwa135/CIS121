#include <iostream>
#include<iomanip>
#include<string>
#include "Header.h"
using namespace std;
class Manager : public Employee // Manager inherits from the Employee class
{
public:
	
	float Long_Term_Bonus();
	
private:

	float lt_bonus = 0.00f;
};
float Manager::Long_Term_Bonus()
{
	lt_bonus = empl_salary * 0.25f;

	return lt_bonus;
}
