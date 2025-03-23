/*• Create a function that displays all
 digits, on a single line, by ascending order.*/


 #include <iostream>

using namespace std;

void ft_print_numbers(void)
{
    for (int n= 0; n <= 9; n++ )
        cout<< n<< " ";
       
}

int main()
{
    ft_print_numbers();
}