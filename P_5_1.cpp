#include<iostream>
#include<string>
#include<vector>    
using namespace std;

class Calculator
{
    public:
    int add(int a,int b)
    {
        return a + b;
    }
    double add(double a,double b)
    {
        return a + b;
    }
    double add(int a,double b)
    {
        return a + b;
    }
    double add(double a ,int b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    vector<double>Result;
    Result.push_back(c.add(5 , 10));
    Result.push_back(c.add(5.5 , 10.5));
    Result.push_back(c.add(5 , 10.5));
    Result.push_back(c.add(5.5 , 10));

    for(size_t i=0;i<Result.size();i++)
    {
        cout<<"Result "<<i+1<<": "<<Result[i]<<endl;
    }

    cout<<"24CE123_Prince.";
    return 0;
}