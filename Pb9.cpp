/*Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include member functions 
to calculate the grade based on the marks and display the student's information.*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;

public:
    inline void setName(const string& n) { name = n; }
    inline string getName() { return name; }

    inline void setClass(const string& sClass) { studentClass = sClass; }
    inline string getClass() { return studentClass; }

    inline void setRollNumber(int rNo) { rollNumber = rNo; }
    inline int getRollNumber() { return rollNumber; }

    inline void setMarks(double m) { marks = m; }
    inline double getMarks() { return marks; }

    char calculeazaNota()
    {
        if (marks >= 90)
        return 'A';
        else if (marks >= 80) 
        return 'B';
        else if (marks >= 70) 
        return 'C';
        else if (marks >= 60) 
        return 'D';
        else 
        return 'F';
    }

    void afiseazaInformatii()
    {
        cout << "Nume: " << name << endl;
        cout << "Clasa: " << studentClass << endl;
        cout << "Numar de inregistrare: " << rollNumber << endl;
        cout << "Note: " << marks << endl;
        cout << "Nota : " << calculeazaNota() << endl;
    }
};

int main()
{
    Student s;
    s.setName("Ion Pop");
    s.setClass("12D");
    s.setRollNumber(10321);
    s.setMarks(87);

    s.afiseazaInformatii();

}
