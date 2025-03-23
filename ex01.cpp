/*Create a function that displays the alphabet in lowercase, on a single line, by
ascending order, starting from the letter ’a’.
*/
#include <iostream>

using namespace std;

void ft_print_alphabet(void)
{
    for (int c= 97; c <= 122; c++ )
        cout<< char(c)<< " ";
       
}

int main()
{
    ft_print_alphabet();
}