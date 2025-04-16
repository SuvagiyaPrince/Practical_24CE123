#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int width;

    public:
    int setD(int l,int w)
    {
        length=l;
        width=w;
    }
    int area()
    {
        return length*width;
    }
    int perimeter()
    {
        return 2*(length+width);
    }
};
int main()
{
    Rectangle R1,R2;
    R1.setD(10,20);
    R2.setD(30,40);

    R1.area();
    R2.area();

    R1.perimeter();
    R2.perimeter();
    cout<<"Area 1 : "<<R1.area()<<"\nperimeter 1 : "<<R1.perimeter()<<endl;
    cout<<"Area 2 : "<<R2.area()<<"\nperimeter 2 : "<<R2.perimeter()<<endl;
    cout<<"24CE123_Prince";
    return 0;
}