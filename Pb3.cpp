/*Write a C++ program to create a class called Person that has private member variables for name, age and country. 
Implement member functions to set and get the values of these variables.*/

#include <iostream>
#include <string>

using namespace std;

class Person
{
     private:
     string name;
     int age;
     string country;
      
     public:
     inline void setName(const string& n ) {  name= n; }
     inline string getName() { return name; }

     inline void setAge(int a) {  age= a; }
     inline int getAge() { return age; }
     
     inline void setCountry(const string& c ) {  country= c; }
     inline string getCountry() { return country; }
};


int main()
{
    Person p;
    p.setName("Guzu-Candale Maria");
    p.setAge(20);
    p.setCountry("Romania");

    cout << p.getName() << " are " << p.getAge() << " ani si locuieste in " << p.getCountry() << endl;
}