#include<iostream>
#include<string>
using namespace std;

int SuperDigit(int n)
{
    if(n<10)
    {
        cout<<"Super Digit : "<<n<<endl;
        return n;
    }
    else
    {
        int Sum = 0;
        while(n>0)
        {
            Sum += n % 10;
            n = n/ 10;
        }
        SuperDigit(Sum);
    }
}
int main()
{
    string n;
    int k;

    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Enter the Number of Repetition : ";
    cin>>k;
    int Sum =0 ;
    for(int i=0;i<n.length();i++)
    {
        Sum += n[i] - '0';
    }
    Sum = Sum * k;
    SuperDigit(Sum);
    return 0;
}