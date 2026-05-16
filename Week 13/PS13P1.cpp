// CIS 121 - Arrays and Vectors Assignment
// Covers: Dynamic arrays, structures, vectors, functions, and file I/O

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// ============================================================
// PART 3 - Global Structure (defined outside main, before functions)
// ============================================================
struct Student {
    string firstName;
    string lastName;
    char districtCode;
    int creditHours;
    double tuition;
};

// ============================================================
// PART 1 FUNCTION - Display parallel arrays
// ============================================================
void displayAutoArrays(string* makes, string* models, int size) {
    cout << "\n--- Auto Inventory ---" << endl;
    cout << left << setw(20) << "Make" << setw(20) << "Model" << endl;
    cout << string(40, '-') << endl;
    for (int i = 0; i < size; i++) {
        cout << left << setw(20) << makes[i] << setw(20) << models[i] << endl;
    }
    cout << endl;
}

// ============================================================
// PART 2 - Employee structure (local to this section)
// ============================================================
struct Employee {
    string firstName;
    string lastName;
    double hours;
    double rate;
    double grossPay;
};

// PART 2 FUNCTION - Compute gross pay with overtime
double computeGrossPay(double hours, double rate) {
    if (hours <= 40) {
        return hours * rate;
    } else {
        double regularPay = 40.0 * rate;
        double overtimePay = (hours - 40.0) * rate * 1.5;
        return regularPay + overtimePay;
    }
}

// PART 2 FUNCTION - Display employee vector
void displayEmployees(const vector<Employee>& employees) {
    cout << "\n--- Employee Payroll ---" << endl;
    cout << left
         << setw(15) << "First"
         << setw(15) << "Last"
         << setw(10) << "Hours"
         << setw(10) << "Rate"
         << setw(12) << "Gross Pay" << endl;
    cout << string(62, '-') << endl;
    for (const Employee& e : employees) {
        cout << fixed << setprecision(2)
             << left
             << setw(15) << e.firstName
             << setw(15) << e.lastName
             << setw(10) << e.hours
             << "$" << setw(9) << e.rate
             << "$" << e.grossPay << endl;
    }
    cout << endl;
}

// ============================================================
// PART 3 FUNCTIONS - Tuition and display
// ============================================================
double computeTuition(char districtCode, int credits) {
    double ratePerCredit;
    if (districtCode == 'I' || districtCode == 'i') {
        ratePerCredit = 250.00;
    } else {
        ratePerCredit = 500.00;
    }
    return credits * ratePerCredit;
}

void displayStudents(const vector<Student>& students) {
    cout << "\n--- Student Tuition Records ---" << endl;
    cout << left
         << setw(15) << "First"
         << setw(15) << "Last"
         << setw(10) << "District"
         << setw(10) << "Credits"
         << setw(12) << "Tuition" << endl;
    cout << string(62, '-') << endl;

    // Range-based loop as required
    for (const Student& s : students) {
        cout << fixed << setprecision(2)
             << left
             << setw(15) << s.firstName
             << setw(15) << s.lastName
             << setw(10) << s.districtCode
             << setw(10) << s.creditHours
             << "$" << s.tuition << endl;
    }
    cout << endl;
}

// ============================================================
// MAIN
// ============================================================
int main() {

    // ----------------------------------------------------------
    // PART 1 - Parallel Dynamic Arrays (Make & Model)
    // ----------------------------------------------------------
    cout << "========================================" << endl;
    cout << "  PART 1: Auto Make & Model Arrays" << endl;
    cout << "========================================" << endl;

    int autoCount;
    cout << "How many autos would you like to enter? ";
    cin >> autoCount;
    cin.ignore();

    // Dynamically allocate parallel arrays
    string* makes  = new string[autoCount];
    string* models = new string[autoCount];

    for (int i = 0; i < autoCount; i++) {
        cout << "\nAuto #" << (i + 1) << endl;
        cout << "  Enter make:  ";
        getline(cin, makes[i]);
        cout << "  Enter model: ";
        getline(cin, models[i]);
    }

    displayAutoArrays(makes, models, autoCount);

    // Free dynamically allocated memory
    delete[] makes;
    delete[] models;

    // ----------------------------------------------------------
    // PART 2 - Employee Vector with Struct
    // ----------------------------------------------------------
    cout << "========================================" << endl;
    cout << "  PART 2: Employee Payroll" << endl;
    cout << "========================================" << endl;

    int empCount;
    cout << "How many employees would you like to enter? ";
    cin >> empCount;
    cin.ignore();

    vector<Employee> employees;

    for (int i = 0; i < empCount; i++) {
        Employee emp;
        cout << "\nEmployee #" << (i + 1) << endl;
        cout << "  First name: ";
        getline(cin, emp.firstName);
        cout << "  Last name:  ";
        getline(cin, emp.lastName);
        cout << "  Hours worked: ";
        cin >> emp.hours;
        cout << "  Hourly rate:  $";
        cin >> emp.rate;
        cin.ignore();

        // Call function to compute gross pay, then add to vector
        emp.grossPay = computeGrossPay(emp.hours, emp.rate);
        employees.push_back(emp);
    }

    displayEmployees(employees);

    // ----------------------------------------------------------
    // PART 3 - Student Tuition with Dynamic Vector & Ctrl+Z stop
    // ----------------------------------------------------------
    cout << "========================================" << endl;
    cout << "  PART 3: Student Tuition Calculator" << endl;
    cout << "========================================" << endl;
    cout << "(Enter student data. Press Ctrl+Z then Enter to stop.)" << endl;

    vector<Student> students;

    string firstName, lastName;
    char   district;
    int    credits;

    while (true) {
        cout << "\nFirst name: ";
        if (!(cin >> firstName)) break;

        cout << "Last name:  ";
        if (!(cin >> lastName)) break;

        cout << "District code (I = in-district, O = out-of-district): ";
        if (!(cin >> district)) break;

        cout << "Credit hours enrolled: ";
        if (!(cin >> credits)) break;

        Student s;
        s.firstName    = firstName;
        s.lastName     = lastName;
        s.districtCode = toupper(district);
        s.creditHours  = credits;
        s.tuition      = computeTuition(s.districtCode, s.creditHours);

        students.push_back(s);
    }

    displayStudents(students);

    // Display total number of students using vector's size() method
    cout << "Total number of students enrolled: " << students.size() << endl;

    return 0;
}
