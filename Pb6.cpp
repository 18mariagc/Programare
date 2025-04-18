/*Write a C++ program to create a class called Triangle that has private
 member variables for the lengths of its three sides. Implement member functions 
to determine if the triangle is equilateral, isosceles, or scalene.*/

#include <iostream>

using namespace std;

class Triangle
{
    private:
    double lenght1;
    double lenght2;
    double lenght3;

    public:

    Triangle(double l1, double l2, double l3)
    {
        lenght1=l1;
        lenght2=l2;
        lenght3=l3;
    }

    void tipulTriunghiului()
    {
        if(lenght1 == lenght2 && lenght2== lenght3)
            cout<<" Tringhiul este echilatereal "<<endl;

        else if(lenght1 == lenght2 || lenght1 == lenght3 || lenght2 == lenght3)
            cout<<"Tringhiul este iscoscel"<<endl;
        else
        cout<<"Tringhiul este oarecare"<<endl;
    }
};
    int main()
    {
        double l1, l2, l3;
        cout<<"Introduceti lungimile laturilor: "<<endl;
        cin>>l1>>l2>>l3;

        Triangle t(l1, l2, l3);
        t.tipulTriunghiului();
        return 0;
    }