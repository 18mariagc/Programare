/*Write a C++ program to create a class called Car that has private member variables for
 company, model, and year. Implement member functions to get and set these variables.*/

 #include <iostream>
#include <string>

using namespace std;

class Car
{
    private:

    string company;
    string model;
    int year;

    public:

     inline void setCompany(const string& c ) {  company= c; }
     inline string getCompany() { return company; }

     inline void setModel(const string& m ) {  model= m; }
     inline string getModel() { return model; }

    inline void setYear(int y){ year=y; }
    inline int getYear() {return year; }
};


int main()
{
 Car c;
 c.setCompany("Audi");
 c.setModel("A5 Avant e-hybrid");
 c.setYear(2025);

 cout<< " Company " << c.getCompany() << " Model " << c.getModel() << " Year " << c.getYear()<<endl;
}