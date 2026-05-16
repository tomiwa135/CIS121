#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void load_arrays(string city[], int pop[], int &c)
{
    ifstream infile;
    string ct;
    int p;

    infile.open("citydata.txt");
    c = 0;
    while (!infile.eof())
    {
        infile >> ct >> p;

        city[c] = ct;
        pop[c]  = p;
        c++;
    }
    infile.close();
}

void display_arrays(string city[], int pop[], int c)
{
    int i;
    cout << "--------------------------------------------" << endl;
    cout << "City              Population" << endl;
    cout << "--------------------------------------------" << endl;
    for (i = 0; i < c; i++)
        cout << city[i] << "  " << pop[i] << endl;
    cout << "--------------------------------------------" << endl;
}

void search_array(string city[], int pop[], int c, string search_city)
{
    int i;
    bool found = false;

    for (i = 0; i < c; i++)
    {
        if (city[i] == search_city)
        {
            cout << city[i] << " has a population of " << pop[i] << endl;
            found = true;
        }
    }
    if (!found)
        cout << search_city << " not found" << endl;
}

int main()
{
    string city[10];
    int pop[10];
    int c;
    string search_city;

    load_arrays(city, pop, c);

    cout << "\n--- Display Arrays ---" << endl;
    display_arrays(city, pop, c);

    cout << "\n--- Search by City ---" << endl;
    cout << "Enter city name, Ctrl+Z to stop: ";
    while (cin >> search_city)
    {
        search_array(city, pop, c, search_city);
        cout << "Enter city name, Ctrl+Z to stop: ";
    }
    cout << "Goodbye. Have a nice day." << endl;

    system("pause");
    return 0;
}
