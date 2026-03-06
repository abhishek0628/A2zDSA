#include<iostream>
using namespace std;
class account{
    private:
    double balance;
    public:
    
    void deposit(double amount){
        if(amount>0)
        balance+=amount;
        else return;
    }
    void withdraw(double amount){
        if(amount<=balance)balance-=amount;
        else return;
    }
    double getbalance(){
        return balance;
    }
};
int main()
{
    account ac;
    ac.deposit(23000);
    cout << ac.getbalance();
    ac.withdraw(30000);
    cout<<ac.getbalance();
    return 0;

}