#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main (){
    string employee1, employee2;
    double salary1, salary2;
    
    //INPUT NAME, SALARY SECTION OF THE CODE
    cout << "Enter employee's name: " << endl;
    getline (cin, employee1);
    cout << "Enter " << employee1 << "'s salary: " << endl;
    cin >> salary1;
    cin.ignore(1,'\n');

    cout << endl << "Enter employee's name: " << endl;
    getline (cin, employee2);
    cout << "Enter " << employee2 << "'s salary: " << endl;
    cin >> salary2;
    cin.ignore(1,'\n');
    
    
    //printing of comparison of the salaryyyy :) SECTION OF THE CODEE
    cout << endl << "<---------------------------->" << endl;
    cout << fixed << setprecision(2);
       cout << endl << setw(20) << left << "Employee Name" << setw(5) << "Salary" << endl;
       cout << setw(20) << left << employee1 << setw(5) << salary1 << endl;
       cout << setw(20) << left << employee2 << setw(5) << salary2 << endl;
    cout << endl << "<---------------------------->" << endl;
    
    
    //indicates which one earns moreeeeee MONEYYYY SECTION OF THE CODEE
    if (salary1 > salary2) {
            cout << endl << employee1 << " earns " << salary1 - salary2 <<  " more money than " << employee2 << "." << endl;
        } else if (salary2 > salary1) {
            cout << endl << employee2 << " earns " << salary2 - salary1 <<  " more money than " << employee1 << "." << endl;
        } else {
            cout << endl << "Both " << employee1 << " and " << employee2 << " earned the same salary." << endl;
        }

    return 0;
}
