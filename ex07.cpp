/*Create a function that displays the number entered as a parameter. The function
has to be able to display all possible values within an int type variable.*/

#include <iostream>
using namespace std;

void ft_putchar(char c)//functia asta nu trebuia 
{
    cout << c;
}
void ft_putnbr(int nb)
{
    cout<<nb;

}

int main()
{
    ft_putnbr(18);
    ft_putchar('.');
    ft_putnbr(02);
    ft_putchar('.');
    ft_putnbr(2005);
}
