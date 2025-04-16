#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<typename T>
T findmax(const vector<T> & collection)
{ 
    T maxVal = collection[0];  
    for(const auto elem : collection)
    {
        if(elem > maxVal)
        {
            maxVal = elem;
        }
    }
    return maxVal;
}

template<typename T>
void ReversCollection(vector<T> & collection,int n)
{
    cout<<"Revers Collection : ";
    for(int i=n-1;i>=0;i--)
    {
        cout<<collection[i]<<" ";
    }
}

template<typename T>
T displayCollection(const vector<T> & collection)
{
    for (const auto elem : collection)
    {
        cout<<elem<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;

    cout<<"----------->Integer Collection<-----------"<<endl;
    cout<<"Enter the size of the collection: ";
    cin>>n;
    vector<int> intcollection(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>intcollection[i];
    }
    
    findmax(intcollection);
    cout<<"Max Value : "<<findmax(intcollection)<<endl;
    ReversCollection(intcollection,n);
    cout<<endl;

    cout<<"----------->Double Collection<-----------"<<endl;
    cout<<"Enter the size of the collection: ";
    cin>>n;
    vector<double> doublecollection(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>doublecollection[i];
    }
    cout<<"Element : "<<displayCollection(doublecollection)<<endl;
    findmax(doublecollection);
    cout<<"Max Value : "<<findmax(doublecollection)<<endl;
    ReversCollection(doublecollection,n);
    cout<<endl;

    cout<<"----------->Char Collection<-----------"<<endl;
    cout<<"Enter the size of the collection: ";
    cin>>n;
    vector<char> charcollection(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element "<<i+1<<" : ";
        cin>>charcollection[i];
    }
    cout<<"Element : "<<displayCollection(charcollection)<<endl;
    findmax(charcollection);
    cout<<"Max Value : "<<findmax(charcollection)<<endl;
    ReversCollection(charcollection,n);
    cout<<endl;
    cout<<"24CE123_Prince.";
    return 0;
}