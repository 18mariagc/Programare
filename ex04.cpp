/*• Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered
as a parameter.
 If n is negative, display ’N’. If n is positive or null, display ’P’.
*/


#include <iostream>

using namespace std;

void ft_is_negative(int n)
{
    if(n<0)
    cout<<"N"<<endl;
    else 
    cout<<"P"<<endl;

}

int main()
{
    int n;
    cin>>n;
    ft_is_negative(n);
}