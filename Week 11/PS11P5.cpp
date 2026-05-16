#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>

using namespace std;

void comp_tuition_fees(char code, float credits, float& tuition, float& fees)
{
    float rate;

    if (code == 'I')
        rate = 250.00;
    else if (code == 'O')
        rate = 500.00;

    tuition = rate * credits;
    fees = 0.10 * tuition;
}

int main()
{
    string lname;
    char code;
    float credits, tuition, fees;
    float totalTuition = 0;
    int count = 0;
    ifstream infile;

    infile.open("student.txt");

    while (!infile.eof())
    {
        infile >> lname >> code >> credits;

        comp_tuition_fees(code, credits, tuition, fees);

        float rate = (code == 'I') ? 250.00 : 500.00;

        cout << setprecision(2) << fixed;
        cout << endl << "Last Name:          " << lname << endl;
        cout << "Student Code:        " << setw(8) << code << endl;
        cout << "Cost Per Credit Hr: $" << setw(8) << rate << endl;
        cout << "Credits Taken:       " << setw(8) << credits << endl;
        cout << "Tuition Owed:       $" << setw(8) << tuition << endl;
        cout << "Course Fees:        $" << setw(8) << fees << endl;
        cout << endl;

        totalTuition += tuition;
        count += 1;

    }
   
    float avg_tuition = totalTuition / count;

    cout << "Total Tuition Owed: $" << setw(8) << totalTuition << endl;
    cout << "Number of Students: " << setw(8) << count << endl;
    cout << "Average Tuition:    $" << setw(8) << avg_tuition << endl;

    infile.close();

    system("pause");
    return 0;
}