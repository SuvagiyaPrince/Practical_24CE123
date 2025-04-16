//object-oriented approach
#include<iostream>
#include<string>
using namespace std;
class product
{
    public:
    int Id;
    string Name;
    int Quantity;
    double Price;
    int AddNewproduct(int id,string name,int quantity,double price)
    {
        Id=id;
        Name=name;
        Quantity=quantity;
        Price=price;
        cout<<"ID : "<<Id<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"Quantity : "<<Quantity<<endl;
        cout<<"Price : "<<Price<<endl;
    }
    void UpdateQuantity(int quantity)
    {
        Quantity += quantity;
        cout<<"Updated Quantity : "<<Quantity<<endl;
    }
    void TotalPrice()
    {
        double TotalPrice = Quantity * Price;
        cout<<"Total Price : "<<TotalPrice<<endl;
    }
};
int main()
{
    product P1,P2;
    P1.AddNewproduct(1,"Prince",10,100);
    cout<<"-----------------------------"<<endl;
    P2.AddNewproduct(2,"Kishan",20,200);
    cout<<"========================================================================="<<endl;
    P1.UpdateQuantity(15);
    P2.UpdateQuantity(30);
    P1.TotalPrice();
    P2.TotalPrice();
    cout<<endl<<"24CE123_Prince";
    return 0;
}