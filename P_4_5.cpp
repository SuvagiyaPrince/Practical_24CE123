#include<iostream>
#include<string>
#include<vector>
using namespace std;    

class Student 
{
    protected:
    float marks;

    public: 
    void setMarks(float m)
    {
        marks = m;
    }
   
    virtual string computeGrade() = 0; 
    ~Student(){}
};
class UnderGraduate : public Student
{
    public: 
    string computeGrade() override
    {
        if(marks >= 85)
        {
            return "A";
        }
        else if(marks >= 70)
        {
            return "B";
        }
        else if(marks >= 50)
        {
            return "C";
        }
        else
        {
            return "Fali";
        }
    }  
};
class PostGraduate : public Student
{
    public:
    string computeGrade() override
    {
        if(marks >= 90)
        {
            return "A";
        }
        else if(marks >= 70)
        {
            return "B";
        }
        else if(marks >= 45)
        {
            return "C";   
        }
        else
        {
            return "Fali";
        }
    }
};

int main()
{
    vector<Student*> students;
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"----------------------->Student "<<i+1<<"<----------------------"<<endl;
        int type;
        float marks;
        cout<<"Enter the type of student (1 for UnderGraduate, 2 for PostGraduate): ";
        cin>>type;
        cout<<"Enter the marks of student: ";
        cin>>marks; 

        Student * s = nullptr;
        if(type == 1)
        {
            s = new UnderGraduate();
        }
        else if(type == 2)
        {
            s = new PostGraduate();
        }
        else
        {
            cout<<"Invalid Type!!"<<endl;
            continue;
        }
        s->setMarks(marks);
        students.push_back(s);
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        cout<<"Student Grade : ";
        string grade = students[i]->computeGrade();
        cout<<"Grade of student "<<i+1<<": "<<grade<<endl;
    }
    for(int i=0;i<n;i++)
    {
        delete students[i];
    }
}