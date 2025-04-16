#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Employee
{
    public:
    string Name;
    double BasicSalary;
    double Bonus;
    
    Employee(string name,double salary,double bonus=500)
    {
        Name=name;
        BasicSalary=salary;
        Bonus=bonus;
    }
    double CalculateTotalSalary()const
    {
        return BasicSalary + Bonus;
    }
    void DisplayDetails()const
    {
        cout<<"Employee Name: "<<Name<<endl;
        cout<<"Employee Basic_Salary: "<<BasicSalary<<endl;
        cout<<"Employee Bonus: "<<Bonus<<endl;
        cout<<"Total Salary: "<<CalculateTotalSalary()<<endl;
    }
};
int main()
{
    vector<Employee> Employees;
    Employees.push_back(Employee("Prince",1000));
    Employees.push_back(Employee("Krish",2000,1000));
    Employees.push_back(Employee("Abhishek",3000,2000));

    for(const auto &emp:Employees)
    {
        emp.DisplayDetails();
        cout<<"----------------------"<<endl;   
    }
     cout<<"24CE123_Prince.";
    return 0;
}