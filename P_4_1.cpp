// #include<iostream>
// #include<cmath>
// using namespace std;

// class Shape
// {
//     private:
//     double radius;

//     public:
//     Shape(double r)
//     {
//         radius = r;
//     }
//     double getRadius()const
//     {
//         return radius;
//     }
// };
// class Circle : public Shape
// {
//     public:
//     Circle(double r) : Shape(r){}
    
//     double Area()const
//     {
//         double Area= M_PI*getRadius()*getRadius();
//         cout<<"Area of Circle : "<<Area<<endl;
//     }
// };
// int main()
// {
//     Circle C1(5),C2(10);
//     C1.getRadius();
//     C1.Area();

//     C2.getRadius();
//     C2.Area();

//     cout<<"24CE123_Prince.";
//     return 0;
// }

 // Dynamic Approach
#include <iostream>
 #include <vector>
 #include <cmath>
 using namespace std;

class Shape
{
    private:
    double radius;
    
    public:
    Shape(double r)
    {
        radius = r;
    }
    double getRadius()const
    {
        return radius;
    }
};
class Circle : public Shape
{
    public:
    Circle(double r) : Shape(r){}
    
    double Area()const
    {
        double Area= M_PI*getRadius()*getRadius();
        cout<<"Area of Circle : "<<Area<<endl;
    }
}; 
int main()
{
    vector<Circle> circles;
    int n;
    cout<<"Enter the number of circles: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        double radius;
        cout<<"------------Circle No."<<i+1<<":------------"<<endl;
        cout<<"Radius : ";
        cin>>radius;
        circles.push_back(Circle(radius));
        circles[i].Area();
    }
    return 0;
}       