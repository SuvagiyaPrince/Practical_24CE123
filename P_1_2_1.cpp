/*procedural Approache*/
#include<iostream>
#include<string>
using namespace std;
struct Product
{ public:
    int Id;
    string Name;
    int Quantity;
    double Price;
   
    int AddNewProduct(int id,string name,int quantity,double price)
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
    int UpdateQuantity(int quantity)
    {
        Quantity += quantity;
        cout<<"Updata Quantity : "<<quantity<<endl;
    }
    int TotalPrice()
    {
       double TotalPrice = Quantity * Price;
        cout<<"Total_Price : "<<TotalPrice<<endl;
    } 
};

int main()
{ 
    Product P1,P2;

    P1.AddNewProduct(1,"prince",10,100);
    cout<<"-----------------------------"<<endl;
    P2.AddNewProduct(2,"kishan",20,200);
    cout<<"========================================================================="<<endl;
    P1.UpdateQuantity(15);
    P2.UpdateQuantity(30);
    P1.TotalPrice();
    P2.TotalPrice();
    cout<<endl<<"24CE123_Prince";
    return 0;
}