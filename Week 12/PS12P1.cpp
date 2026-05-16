#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void load_arrays(string fname[], string lname[], double gpa[], int &c)
{
    ifstream infile;
    string fn, ln;
    double g;

    infile.open("students.txt");
    c = 0;
    while (!infile.eof())
    {
        infile >> fn >> ln >> g;

        fname[c] = fn;
        lname[c] = ln;
        gpa[c]   = g;
        c++;
    }
    infile.close();
}

void display_arrays(string fname[], string lname[], double gpa[], int c)
{
    int i;
    cout << "--------------------------------------------" << endl;
    cout << "First Name   Last Name    GPA" << endl;
    cout << "--------------------------------------------" << endl;
    for (i = 0; i < c; i++)
        cout << fname[i] << "  " << lname[i] << "  " << gpa[i] << endl;
    cout << "--------------------------------------------" << endl;
}

void display_arrays_reverse(string fname[], string lname[], double gpa[], int c)
{
    int i;
    cout << "--------------------------------------------" << endl;
    cout << "Arrays in Reverse Order:" << endl;
    cout << "First Name   Last Name    GPA" << endl;
    cout << "--------------------------------------------" << endl;
    for (i = c - 1; i >= 0; i--)
        cout << fname[i] << "  " << lname[i] << "  " << gpa[i] << endl;
    cout << "--------------------------------------------" << endl;
}

void search_array(string fname[], string lname[], double gpa[], int c, string search_ln)
{
    int i;
    bool found = false;

    for (i = 0; i < c; i++)
    {
        if (lname[i] == search_ln)
        {
            cout << fname[i] << "  " << lname[i] << "  " << gpa[i] << endl;
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
    double gpa[10];
    int c;
    string search_ln;

    load_arrays(fname, lname, gpa, c);

    cout << "\n--- Display Arrays ---" << endl;
    display_arrays(fname, lname, gpa, c);

    cout << "\n--- Display Arrays in Reverse ---" << endl;
    display_arrays_reverse(fname, lname, gpa, c);

    cout << "\n--- Search by Last Name ---" << endl;
    cout << "Enter last name (Ctrl+Z to stop): ";
    while (cin >> search_ln)
    {
        search_array(fname, lname, gpa, c, search_ln);
        cout << "Enter last name (Ctrl+Z to stop): ";
    }
    cout << "Goodbye. Have a nice day." << endl;

    system("pause");
    return 0;
}
