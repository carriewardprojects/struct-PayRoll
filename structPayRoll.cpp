/*
 * Carrie Ward
 * Created on December 2, 2017, 7:19 PM
 * A simple C++ program that uses a struct to store an employee's payroll
 * source: C++ from Control Structures through Objects by Tony Gaddis
 */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct PayRoll
{
    int empNumber;      // employee number
    string name;        // employee name
    double hours;       // hours worked
    double payRate;     // employee hourly rate
    double grossPay;    // employee gross pay
};

int main() {

    PayRoll employee;   // employee is a PayRoll struct

    // Get the employee number
    cout << "Enter the employee number: ";
    cin >> employee.empNumber;

    // Get the employee name
    cout << "Enter the employee name: ";
    cin.ignore();   // to skip the remaining '\n' character
    getline(cin, employee.name);

    //Get the hours worked by the employee
    cout << "Enter the number of hours the employee worked: ";
    cin >> employee.hours;

    // Get the employee's hourly pay rate
    cout << "Enter the employee's hourly pay rate: ";
    cin >> employee.payRate;

    // Calculate the employee's gross pay
    employee.grossPay = employee.hours * employee.payRate;

    // Display the employee data
    cout << "Name: " << employee.name << endl;
    cout << "Employee number: " << employee.empNumber << endl;
    cout << "Hours worked this week: " << employee.hours << endl;
    cout << "Hourly pay rate " << employee.payRate << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << "Weekly gross Pay: $" << employee.grossPay << endl;

    return 0;
}
