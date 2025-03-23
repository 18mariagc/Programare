/*Create a function that displays all different combinations of n numbers by ascending
order*/
#include <iostream>
using namespace std;

void ft_print_combn(int n)
{
    for (int i = 0; i <= n; i++)
     {
        for (int j = i; j <= n; j++) 
        {
        
            cout << i << j  << endl; 
        }
    }
}

int main()
{
    int n;
    cin>>n;
    ft_print_combn(n);
}