#include<iostream>
using namespace std;
class Bank_Account
{
    public:
    string Account_Name;
    string Account_Number;
    double Balance;

    Bank_Account(string A_Name,string A_Number,double A_Balance)
    {
        Account_Name=A_Name;
        Account_Number=A_Number;
        Balance=A_Balance;
    }

    int Details()
    {
        cout<<"Account Name : "<<Account_Name<<endl;
        cout<<"Account Number : "<<Account_Number<<endl;
        cout<<"Account Balance : "<<Balance<<endl;
    }

    int Deposit(double d)
    {
        Balance += d;
        cout<<"Deposit : $"<<d<<endl;
    }

    int Withdraw(double w)
    {
        if(Balance>w)
        {
            Balance -= w;
            cout<<"Withdraw : $"<<w<<endl;
        }
        else
        {
            cout<<"Not Sufficient Balance.";
        }
    }

    int Display_Balance()
    {
        cout<<"Total Balance : $"<<Balance<<endl<<"----------------------------------"<<endl;
    }
   
};
int main()
{
   Bank_Account Account1("Prince","1234567891",100000);
   Bank_Account Account2("Kishan","1234567892",200000);

   Account1.Details();
   Account1.Deposit(100);
   Account1.Withdraw(5000);
   Account1.Display_Balance();

   Account2.Details();
   Account2.Deposit(100);
   Account2.Withdraw(1000);
   Account2.Display_Balance();
   cout<<"24CE123_Prince";
   return 0;
}