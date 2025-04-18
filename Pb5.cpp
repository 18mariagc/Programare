/*Write a C++ program to implement a class called BankAccount that has private member 
variables for account number and balance. Include member functions to deposit and withdraw money from the account.*/

#include <iostream>


using namespace std;

class BankAccount
{
    private:

    int accountNumber;
    double balance;

    public:
    BankAccount (int accNr, double initialBalance )
    {
         accountNumber=accNr; 
         balance=initialBalance;
    }
    
    void depozit(double suma)
    {
        if (suma>0)
        {
        balance += suma;
        cout<< " Suma de " << suma << " a fost depozitata in contul tau"<<endl; 
        }
        else  
        cout<<" Suma trebuie sa fie pozitiva! "<<endl;
        }

    void retragere(double suma)
    {
        if (suma>0 && suma <= balance)
        {
        balance -= suma;
        cout<< " Suma " << suma << " a fost retrasa "<<endl;
        } 

        else  

        cout<< "Nu sunt destui banii in cont!"<<endl;
    }

    void afiseazaSold() const
    {
        cout << "Soldul curent este " << balance << " lei" << endl;
    }
};

int main()
{
    BankAccount account(1000, 450);
    account.depozit(1500);
    account.retragere(270);
    account.afiseazaSold();
    
}