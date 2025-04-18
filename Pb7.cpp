/*Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member 
functions to calculate and set salary based on employee performance.*/

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Employee
{
    private:
    string name;
    int employeeID;
    double salary;
     
    public:

    Employee(string empName, int empID, double initialSalary)
    {
        name = empName;
        employeeID = empID;
        salary = initialSalary;
    }

   
    void stabilesteSalariu(string performanta)
    {
        if (performanta == "excelent")
        {
            salary += salary * 0.20; 
            cout << " Salariul a fost marit cu 20%. " << endl;
        }
        else if (performanta == "bun")
        {
            salary += salary * 0.10;
            cout << " Salariul a fost marit cu 10%. " << endl;
        }
        else if (performanta == "slab")
        {
            salary -= salary * 0.05; 
            cout << " Salariul a fost redus cu 5%. " << endl;
        }   
    }
    void afiseazaDetalii() 
    {
        cout << "Nume: " << name << endl;
        cout << "ID Angajat: " << employeeID << endl;
        cout << "Salariu curent: " << salary << " lei" << endl;
    }
};

int main()
{
    Employee E("Maria Guzu-Candale", 112301, 5000);

    E.afiseazaDetalii();
    E.stabilesteSalariu("excelent");
    E.afiseazaDetalii();
}