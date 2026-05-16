
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;

void load_arrays(string fname[], string lname[], double salary[], int &c)
{
    ifstream infile;
    string fn, ln;
    double sal;

    infile.open("empldata.txt");
    c = 0;
    while (!infile.eof())
    {
        infile >> fn >> ln >> sal;

        fname[c]  = fn;
        lname[c]  = ln;
        salary[c] = sal;
        c++;
    }
    infile.close();
}

void display_arrays(string fname[], string lname[], double salary[], int c)
{
    int i;
    cout << "--------------------------------------------" << endl;
    cout << "First Name   Last Name    Salary" << endl;
    cout << "--------------------------------------------" << endl;
    for (i = 0; i < c; i++)
        cout << fname[i] << "  " << lname[i] << "  $"
             << fixed << setprecision(2) << salary[i] << endl;
    cout << "--------------------------------------------" << endl;
}

void search_array(string fname[], string lname[], double salary[], int c, string search_ln)
{
    int i;
    bool found = false;

    for (i = 0; i < c; i++)
    {
        if (lname[i] == search_ln)
        {
            cout << fname[i] << "  " << lname[i] << "  $"
                 << fixed << setprecision(2) << salary[i] << endl;
            found = true;
        }
    }
    if (!found)
        cout << search_ln << " not found" << endl;
}

int main()
{
    string fname[10];
    string lname[10];
    double salary[10];
    int c;
    string search_ln;

    load_arrays(fname, lname, salary, c);

    cout << "\n--- Display Arrays ---" << endl;
    display_arrays(fname, lname, salary, c);

    cout << "\n--- Search by Last Name ---" << endl;
    cout << "Enter last name (Ctrl+Z to stop): ";
    while (cin >> search_ln)
    {
        search_array(fname, lname, salary, c, search_ln);
        cout << "Enter last name (Ctrl+Z to stop): ";
    }
    cout << "Goodbye. Have a nice day." << endl;

    system("pause");
    return 0;
}
