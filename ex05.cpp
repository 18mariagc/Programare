/*Create a function that displays all different combinations of three 
different digits in ascending order, listed by ascending order
 - yes, repetition is voluntary.
*/
#include <iostream>

using namespace std;

void ft_print_comb(void)
{
    
    
    for (int i = 0; i <= 9; i++) //alegem prima cifra de la 0 la 9
     {
        for (int j = i; j <= 9; j++) // alegem a doua cifra care trebuie sa fie cel putin egala cu prima
        {
            for (int k = j; k <= 9; k++) //alegem a treia cifra care trebuie sa fie cel putin egala cu a doua
            {
                cout << i << j << k << endl; // afisam combinatia de cifre
            }
        }
    }
}

int main()
{
    ft_print_comb();
}