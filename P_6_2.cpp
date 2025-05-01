#include<iostream>
using namespace std;

class Point
{
    private:
    int x,y;

    public:
    Point(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    Point *move(int &dx,int &dy)
    {
        x += dx;
        y += dy;
        return this;
    }
    void Display()
    {
        cout<<"Point("<<x<<","<<y<<")"<<endl<<endl;
    }
};

int main()
{
    int x,y;
    cout<<"Enter initial X And Y Coordinate : ";
    cin>>x>>y;  

    Point *p = new Point(x,y);
    cout<<"initial position : ";
    p->Display();

    int dx1,dx2,dy1,dy2;
    cout<<"Enter the dx1 and dy1: ";
    cin>>dx1>>dy1;
    cout<<"Enter the dx2 and dy2: ";
    cin>>dx2>>dy2;

    p->move(dx1,dy1)->move(dx2,dy2);
    cout<<"Updata position : ";
    p->Display();

    delete p;

    cout<<"23CE123_Prince."<<endl;
    return 0;
}