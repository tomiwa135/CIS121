#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;

float compute_bi_weekly(float salary)
{
    float biWeeklyPay;

    biWeeklyPay = salary / 26;

    return biWeeklyPay;
}

int main()
{
    string lname;
    float salary, biWeeklyPay;
    float totalAnnualSalary = 0;
    float avgAnnualSalary = 0;
    int count = 0;
    ifstream infile;

    infile.open("empl.txt");

    while (!infile.eof())
    {
        infile >> lname >> salary;

        biWeeklyPay = compute_bi_weekly(salary);

        cout << setprecision(2) << fixed;
        cout << endl << "Last Name:        " << lname << endl;
        cout << "Annual Salary:    $" << setw(10) << salary << endl;
        cout << "Bi-Weekly Pay:    $" << setw(10) << biWeeklyPay << endl;
        cout << endl;

        totalAnnualSalary += salary;
        count += 1;
    } 
 
    avgAnnualSalary = totalAnnualSalary / count;

    cout << "Total Annual Salary:   $" << setw(10) << totalAnnualSalary << endl;
    cout << "Number of Employees:   " << setw(10) << count << endl;
    cout << "Average Annual Salary: $" << setw(10) << avgAnnualSalary << endl;

    infile.close();
    system("pause");
    return 0;
}