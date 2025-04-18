/*Write a C++ program to create a class called Rectangle that has private
 member variables for length and width.
  Implement member functions to calculate the rectangle's area and perimeter.*/

  #include <iostream>
#include <math.h>

using namespace std;

class Rectangle
{
    private:
    double lenght, witdh;

    public:
    Rectangle(double l, double w): lenght(l), witdh(w){}

    double AriaDreptunghi()
    {
        return lenght * witdh;
    }

    double PerimetruDreptunghi()
    {
        return 2 * (lenght + witdh);
    }
};

int main()
{
    double lenght, witdh;
    cout << "Introduceti lungimea si latimea: ";
    cin >> lenght >> witdh;

    Rectangle rectangle(lenght, witdh);

    double aria = rectangle.AriaDreptunghi();
    cout << "Aria este: "<< aria <<endl;

    double perimetru = rectangle.PerimetruDreptunghi();
    cout << "Perimetru este: "<< perimetru <<endl;

}