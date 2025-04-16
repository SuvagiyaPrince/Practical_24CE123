#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Fuel
{
    private:
    string fuelType;
    
    public:
    Fuel(string fuel) : fuelType(fuel) {}
     
    string getFuelType() const
    {
        return fuelType;
    }
};
class Brand : public Fuel
{
    private:
    string brandName;

    public:
    Brand(string fuel, string brand) : Fuel(fuel), brandName(brand) {}

    string getBrandName() const
    {
        return brandName;
    }
};
class Car : public Brand
{
    public:
    Car(string fuel,string brand) : Brand(fuel,brand){}
    
    void DisplayDetails()const
    { 
        cout<<"Brand : "<< getBrandName()<<endl;
        cout<<"Fule Type : "<< getFuelType()<<endl;
    }
};

int main()
{
    vector<Car> car;

    int n;
    cout<<"Enter The Number Car : ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string brand,fuel;
        cout<<"-------------------> Car "<<i+1<<"<-----------------------"<<endl;
        cout<<"Brand Name: ";
        cin>>brand;
        cout<<"Fuel Type : ";
        cin>>fuel;

        car.push_back(Car(brand,fuel));
        
    }
    cout<<"---------------------------------------------------------"<<endl;
    for(int i=0;i<n;i++)
    
        car[i].DisplayDetails();
        cout<<"---------------------"<<endl;
    
    cout<<"24CE123_prince";
    return 0;
}