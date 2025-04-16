// #include<iostream>
// #include<string>
// using namespace std;

// class Person
// {
//     private:
//     string name;
//     int age;

//     public:
//     Person(string n, int a)
//     {
//         name = n;
//         age = a;
//     }
//     void DisplayDetails() const
//     {
//         cout <<"Name: "<<name<<endl;
//         cout<<"Age: " << age << endl;
//     }
// };

// class Employee : public Person
// {
//     private:
//     int eID;
    
//     public:
//     Employee(string n,int a,int id) : Person(n,a),eID(id){}
    
//     void DisplayDetails()const
//     {
//         Person :: DisplayDetails();
//         cout<<"Employee ID : "<<eID<<endl;
//     }
// };

// class Manager : public Employee
// {
//     private:
//     string Department;

//     public:
//     Manager(string n,int a,int id,string department) : Employee(n,a,id),Department(department){}
//     void DisplayDetails()const
//     {
//         Employee :: DisplayDetails();
//         cout<<"Department : "<<Department<<endl;
//     }
// };
// int main()
// {
//     Manager M1("prince",18,123,"CE");
//     Manager M2("kishan",18,134,"CSE");
//     Manager M3("Abhishek",18,97,"IT");
//     M1.DisplayDetails();
//     cout<<"-------------------"<<endl;
//     M2.DisplayDetails();
//     cout<<"-------------------"<<endl;
//     M3.DisplayDetails();
//     cout<<"-------------------"<<endl;
//     cout<<"24ce123_Prince"<<endl;
//     return 0;
// }

// Dynamic approch
#include<iostream>
#include<string>
#include<vector>    
#include<map>
using namespace std;

class Person 
{
    private:
    string name;
    int age;

    public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
    virtual void DisplayDetails() const
    {
        cout <<"Name: "<<name<<endl;
        cout<<"Age: " << age << endl;
    }
};
class Employee : public Person
{
    private:
    int eID;
    
    public:
    Employee(string n,int a,int id) : Person(n,a),eID(id){}
    
    void DisplayDetails()const override
    {
        Person :: DisplayDetails();
        cout<<"Employee ID : "<<eID<<endl;
    }
};
class Manager : public Employee
{
    private:
    string Department;

    public:
    Manager(string n,int a,int id,string department) : Employee(n,a,id),Department(department){}
    void DisplayDetails()const override
    {
        Employee :: DisplayDetails();
        cout<<"Department : "<<Department<<endl;
    }
};
int main()
{
    vector<Manager> Managers;
    int n;
    cout<<"Enter the number of managers: ";     
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string name,department;
        int age,eID;
        cout<<"----------------------->Manager "<<i+1<<"<----------------------"<<endl;
        cout<<"Enter the name of manager: ";
        cin>>name;
        cout<<"Enter the age of manager: ";
        cin>>age;
        cout<<"Enter the Employee ID of manager: ";
        cin>>eID;
        cout<<"Enter the department of manager: ";
        cin>>department;
        Managers.push_back(Manager(name,age,eID,department));
    }
    cout<<"----------------------->Manager Details<----------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        Managers[i].DisplayDetails();
        cout<<"-------------------"<<endl;
    }
    
    cout<<"24CE123_Prince";
    return 0;
}