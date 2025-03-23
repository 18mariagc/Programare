/*Create a function that displays all different combination of two digits between 00
and 99, listed by ascending order.
*/

#include <iostream>
using namespace std;

void ft_print_comb2(void)
{
    for (int i = 0; i <= 9; i++)
     {
        for (int j = i; j <= 9; j++) 
        {
        
            cout << i << j  << endl; 
        }
    }
}

int main()
{
    ft_print_comb2();
}