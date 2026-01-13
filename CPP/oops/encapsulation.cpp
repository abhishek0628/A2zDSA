/*
Encapsulation is the process of hiding the internal details (data) of a class and providing a controlled way to access or modify it.

Keeps data safe from outside interference or misuse.

Achieved using access specifiers: private, protected, and public.
*/
#include<iostream>
using namespace std;
class BankAccount{
    private:
    double balance;
    public:
    BankAccount(double initialbalance)
    {
        if(initialbalance>=0)
        {
            balance=initialbalance;

        }
        else{
            balance=0;
        }
    }
    void deposit(double amount)
    {
        if(amount>=0)
        {
            balance+=amount;
        }
        else{
            cout<<"money can not be deposited";
        }
    }
    double getbalance()
    {
        return balance;
    }
};
int main()
{
    BankAccount ac(1000);
    ac.deposit(200);
    cout<<ac.getbalance();
    return 0;
}