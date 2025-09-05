class bankaccount{
    private String AccountHolder;
    private double balance;
    bankaccount(String AccountHolder,double balance)
    {
        this.AccountHolder=AccountHolder;
        this.balance=balance;
    }

    public String GetAccountHolder()
    {
        return AccountHolder;  
    }
    public void SetAccountHolder(String AccountHolder)
    {
        this.AccountHolder=AccountHolder;
    }
    public void deposit(double amount)
    {
        if(amount>0)
        {
            balance=balance+amount;
        }
    }
    public void withdraw(double amount)
    {
        if(amount>0 &&amount<=balance)
        {
            balance=balance-amount;

        }
    }
    public double getbalance()
    {
        return balance;
    }

}
public class encapsulation
{
    public static void main(String[] args) {
        {
            bankaccount acc=new bankaccount("abhi",2000);
            acc.deposit(78);
            acc.withdraw(262);
            System.out.println(acc.getbalance());
            acc.SetAccountHolder("alex");
            System.out.println(acc.GetAccountHolder());
        }
    }
}