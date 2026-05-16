#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

class Manager : public Employee
{
public:
    Manager();
    void Department(string dept);
    string Department();
    float Long_Term_Bonus();
    float Bonus() override;
    ~Manager();

private:
    string m_department;
    float  m_long_term_bonus;
};

Manager::Manager() : Employee()
{
    m_department      = "";
    m_long_term_bonus = 0.00f;
}

Manager::~Manager()
{
    cout << "Manager object destroyed." << endl;
}

void Manager::Department(string dept) { m_department = dept; }
string Manager::Department()          { return m_department; }

float Manager::Bonus()
{
    m_bonus = m_salary * 0.50f;
    return m_bonus;
}

float Manager::Long_Term_Bonus()
{
    m_long_term_bonus = m_salary * 0.50f;
    return m_long_term_bonus;
}

#endif
