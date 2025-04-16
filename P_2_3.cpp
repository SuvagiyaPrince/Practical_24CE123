#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
    public:
    string AccountHolderName;
    int AccountNumber;
    double Balance;

    BankAccount()
    {
        AccountHolderName="N/A";
        AccountNumber=0;
        Balance=0;
    }
    BankAccount(string name,int number,double balance)
    {
        AccountHolderName=name;
        AccountNumber=number;
        Balance=balance;
    }
    void Diposit(double amount)
    {
        if(amount > 0)
        {
            Balance += amount;
            cout<<"Deposited : "<<amount<<endl;
        }
        else
        {
            cout<<"Invalid Amount"<<endl;
        }       
    }
    void Withdraw(double amount)
    {
        if(amount > 0 && amount <= Balance)
        {
            Balance -= amount;
            cout<<"Withdrawn : "<<amount<<endl;
        }
        else
        {
            cout<<"Invalid Amount"<<endl;
        }
    }
    void DisplayAccountDetails()
    {
        cout<<"Account Holder Name : "<<AccountHolderName<<endl;
        cout<<"Account Number : "<<AccountNumber<<endl;
        cout<<"Balance : "<<Balance<<endl;
    }
};
int main()
{
    BankAccount account1;
    BankAccount account2("Prince",1,100000);

    cout<<"Account 1 Details : "<<endl;
    account1.DisplayAccountDetails();
    cout<<"--------------------------------------"<<endl;

    cout<<"Account 2 Details : "<<endl;
    account2.DisplayAccountDetails();
    cout<<"======================================="<<endl<<endl;

    account1.Diposit(200);
    account1.Withdraw(100);
    cout<<"Account 1 Details after Transaction : "<<endl;
    account1.DisplayAccountDetails();
    cout<<"--------------------------------------"<<endl;

    account2.Diposit(500);
    account2.Withdraw(200);
    cout<<"Account 2 Details after Transaction : "<<endl;
    account2.DisplayAccountDetails();
    cout<<"--------------------------------------"<<endl;
    cout<<"24CE123_Prince";
    return 0;
}