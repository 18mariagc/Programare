 /*Write a C++ program to implement a class called Circle that has private member variables for radius.
  Include member functions to calculate the circle's area and circumference.*/
#include <iostream>
#include <math.h>

using namespace std;

class Circle
{
    private:
    double radius;

    public:
    Circle(double r): radius(r){}

    double AriaCerc()
    {
        return M_PI * radius * radius;
    }

    double CircumferintaCerc()
    {
        return 2 * M_PI *  radius;
    }
};

int main()
{
 double radius;

 cout << "Introduceti raza cercului: ";
 cin >> radius;

 Circle circle(radius);

 double aria = circle.AriaCerc();
 cout<< "Aria este: " << aria <<endl;

 double circumferinta = circle.CircumferintaCerc();
 cout<< "Circumferinta este: "<< circumferinta <<endl;
} 