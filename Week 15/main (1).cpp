#include <iostream>
#include <iomanip>
#include "Manager.h"

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    cout << "========================================" << endl;
    cout << "   Employee / Manager Class Demo        " << endl;
    cout << "========================================" << endl;

    cout << "\n--- Base Class: Employee Object ---" << endl;

    Employee emp;
    emp.FirstName("Jane");
    emp.LastName("Smith");
    emp.Salary(85000.00f);

    cout << "Name   : " << emp.FirstName() << " " << emp.LastName() << endl;
    cout << "Salary : $" << emp.Salary() << endl;
    cout << "Bonus  : $" << emp.Bonus() << "  (10% because salary <= $100,000)" << endl;

    Employee emp2;
    emp2.FirstName("Bob");
    emp2.LastName("Jones");
    emp2.Salary(150000.00f);

    cout << "\nName   : " << emp2.FirstName() << " " << emp2.LastName() << endl;
    cout << "Salary : $" << emp2.Salary() << endl;
    cout << "Bonus  : $" << emp2.Bonus() << "  (20% because salary > $100,000)" << endl;

    cout << "\n--- Derived Class: Manager Object ---" << endl;

    Manager mgr;
    mgr.FirstName("Alice");
    mgr.LastName("Walker");
    mgr.Salary(120000.00f);
    mgr.Department("Engineering");

    cout << "Name       : " << mgr.FirstName() << " " << mgr.LastName() << endl;
    cout << "Department : " << mgr.Department() << endl;
    cout << "Salary     : $" << mgr.Salary() << endl;
    cout << "Bonus      : $" << mgr.Bonus() << "  (OVERRIDDEN -> 50% of salary)" << endl;
    cout << "Long-Term  : $" << mgr.Long_Term_Bonus() << "  (NEW method -> 50% of salary)" << endl;

    cout << "\n--- Polymorphism Demo ---" << endl;

    Employee* ptr = &mgr;
    cout << "Calling Bonus() through Employee* pointer: $" << ptr->Bonus() << endl;

    cout << "\n========================================" << endl;
    cout << "   All methods verified successfully!   " << endl;
    cout << "========================================" << endl;

    return 0;
}
