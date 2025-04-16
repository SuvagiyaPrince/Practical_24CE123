#include <iostream>
#include <map>
#include <string>

using namespace std;

class BankAccount 
{
public:
    static int TotalAccounts;
    int AccountNumber;
    string AccountHolderName;
    double Balance;
    
    BankAccount()
    {
        AccountNumber=0;
        AccountHolderName="N/A";
        Balance=0;
        TotalAccounts++;
    }
    BankAccount(int number, string name, double balance)
    {
        AccountNumber=number;
        AccountHolderName=name;
        Balance=balance;
        TotalAccounts++;
    }
    void DisplayAccountDetails() const {
        cout << "Account Number: " << AccountNumber << endl;
        cout << "Account Holder Name: " << AccountHolderName << endl;
        cout << "Account Balance: " << Balance << endl;
    }
    

    friend void TransferMoney(BankAccount &from, BankAccount &to, double amount);
};

int BankAccount::TotalAccounts = 0;

void TransferMoney(BankAccount &from, BankAccount &to, double amount) {
    if (amount > 0 && amount <= from.Balance)
    {
        from.Balance -= amount;
        to.Balance += amount;
        cout << "Amount Transferred Successfully" << endl;
        cout << "Transfer Amount: " << amount << endl;
        cout << "From Account: " << from.AccountNumber << endl;
        cout << "To Account: " << to.AccountNumber << endl;
    } 
    else 
    {
        cout << "Insufficient Balance or Invalid Transfer Amount!" << endl;
    }
}

int main() 
{
    map<int, BankAccount> Accounts;

    int n;
    cout<<"Enter the Number of Accounts to Create : ";
    cin>>n;

    int AccNumber;
    string AccName;
    int AccBalance;
    for(int i=1;i<=n;i++)
    {
        cout<<"---------->"<<"Account Number :"<<i<<"<---------------"<<endl;
        cout<<"Account Number : ";
        cin>>AccNumber;
        cout<<"Account Holder Name : ";
        cin>>AccName;
        cout<<"Balance : ";
        cin>>AccBalance;
        Accounts[AccNumber] = BankAccount(AccNumber,AccName,AccBalance);
        cout<<"---------------------------"<<endl;
    }

    for (const auto &account : Accounts) 
    {
        account.second.DisplayAccountDetails();
        cout << "----------------------" << endl;
    }

    TransferMoney(Accounts[1], Accounts[2], 200);

    for (const auto &account : Accounts)
    {
        account.second.DisplayAccountDetails();
        cout << "----------------------" << endl;
    }

    cout << "Total number of accounts: " << BankAccount::TotalAccounts << endl;

    cout << "24CE123_Prince." << endl;

    return 0;
}