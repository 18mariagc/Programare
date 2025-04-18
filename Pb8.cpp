/*Write a C++ program to implement a class called Date that has private member variables for day, month, and year.
 Include member functions to set and get these variables, as well as to validate if the date is valid.*/
  
 #include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    inline void setDay(int d) { day = d; }
    inline int getDay() { return day; }

    inline void setMonth(int m) { month = m; }
    inline int getMonth() { return month; }

    inline void setYear(int y) { year = y; }
    inline int getYear() { return year; }

    
    bool esteAdevarat()
    {
        if (year < 1 || month < 1 || month > 12 || day < 1)
            return false;

        int daysInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

        return day <= daysInMonth[month - 1];
    }
};

int main()
{
    Date d;
    d.setDay(18);
    d.setMonth(2);
    d.setYear(2005);

    cout << "Data: " << d.getDay() << "/" << d.getMonth() << "/" << d.getYear() << endl;

}


