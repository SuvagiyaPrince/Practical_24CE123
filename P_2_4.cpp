#include<iostream>
#include<string>
using namespace std;
class  InventoryItem 
{ 
    public:
    int itemID;
    string itemName;
    float Price;
    int Quantity;

    InventoryItem()
    {
        itemID=0;
        itemName="N/A";
        Price=0;
        Quantity=0;
    }
    InventoryItem(int id,string name,float price,int quantity)
    {
        itemID=id;
        itemName=name;
        Price=price;
        Quantity=quantity;
    }
    void ItemDatail()
    {
        cout<<"itemID : "<<itemID<<endl;
        cout<<"itemName : "<<itemName<<endl;
        cout<<"Price : "<<Price<<endl;
        cout<<"Quantity : "<<Quantity<<endl<<endl;
    }
    int AddStock(int quantity)
    {
        Quantity += quantity;
        cout<<"Updata Quantity : "<<Quantity<<endl;
    }
    int SellItem(int sell)
    {
        Quantity -= sell;
        cout<<"Sell Item : "<<Quantity<<endl<<endl;
    }
    void UpdataItem()
    {
        cout<<"itemID : "<<itemID<<endl;
        cout<<"itemName : "<<itemName<<endl;
        cout<<"Price : "<<Price<<endl;
        cout<<"Quantity : "<<Quantity<<endl<<endl;
    }
};
int main()
{
    InventoryItem Item[3];
    Item[0] = InventoryItem();
    Item[1] = InventoryItem(123,"mobile",2000,1);
    Item[2] = InventoryItem(134,"tv",1000,1);

    for(int i=0;i<3;i++)
    {
        cout<<"------------------>>Item--"<<(i+1)<<"<<---------------"<<endl;
        Item[i].ItemDatail();
    }
    Item[1].AddStock(2);
    Item[1].SellItem(1);

    Item[2].AddStock(3);
    Item[2].SellItem(1);

    cout<<"Updata Inventory Item."<<endl<<endl;
    for(int i=0;i<3;i++)
    {
        Item[i].UpdataItem();
    }
    cout<<"24CE123_Prince.";
    return 0;
}