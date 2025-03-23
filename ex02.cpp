/*• Create a function that displays the alphabet in lowercase, on a single line, by
descending order, starting from the letter ’z’.*/


#include <iostream>

using namespace std;

void ft_print_reverse_alphabet(void)
{
    for (int c= 122; c >= 97; c-- )
        cout<< char(c)<< " ";
       
}

int main()
{
    ft_print_reverse_alphabet();
}