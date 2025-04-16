#include<iostream>
#include<string>
using namespace std;
class Student
{ public:
    int Roll_Number;
    string Name;
    int marks[3];
    Student()
    {
        Roll_Number=0;
        Name="N/A";
        for(int i=0;i<3;i++)
        {
            marks[i]=0;
        }
    }
    Student(int roll_no,string name,int m[])
    {
        Roll_Number=roll_no;
        Name=name;
        for (int i=0;i<3;i++)
        {
            marks[i] = m[i];
        }
    }
    float CalculateAverage()
    {
        float avg=0;
        for(int i=0;i<3;i++)
        {
            avg+=marks[i];
        }
        return avg/3;     
    }
    void DisplayDetails()
    {
        cout<<"Roll_Number : "<<Roll_Number<<endl;
        cout<<"Name : "<<Name<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<marks[i]<<" ";
        } 
        cout<<endl; 
    }
};
int main()
{
    int m1[3]={98,99,100};
    int m2[3]={100,99,98};
    Student S[3]={Student(),Student(1,"Prince",m1),Student(2,"Abhishek",m2)};  
    for(int i=0;i<3;i++)
    { 
        cout<<"Student "<<i+1<<" Details : "<<endl;
        S[i].DisplayDetails();
        cout<<"Average: "<<S[i].CalculateAverage()<<endl;
        cout<<"-----------------------------------"<<endl;
    }
    cout<<"24CE123_Prince.";
    return 0;   
}