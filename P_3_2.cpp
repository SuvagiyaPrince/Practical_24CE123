#include<iostream>
#include<vector>
#include<chrono>
using namespace std;
using namespace std::chrono;

int RecursiveSum(vector<int> & arr,int n)
{
    if(n <= 0)
    {
        return 0;
    }
    else
    {
        return RecursiveSum(arr,n-1) + arr[n-1];
    }
}
int non_RecursiveSum(vector<int> & arr,int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<endl;

    vector<int> arr(size);
    
    for(auto & i:arr)   
    {
        cout<<"Enter the elements of the array : ";
        cin>>i;
    }

    auto start = high_resolution_clock::now();
    int recSum = RecursiveSum(arr,size);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout<<"Sum Calculate using recusion :  "<<recSum<<endl;
    cout<<"Time taken by RecursiveSum: "<<duration.count()<<" microseconds"<<endl;

    start = high_resolution_clock::now();
    int nonRecSum = non_RecursiveSum(arr,size);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout<<"Sum Calculate using non_Recursive : "<<nonRecSum<<endl;
    cout<<"Time taken by non_RecursiveSum: "<<duration.count()<<" microseconds"<<endl;
          
    
    cout<<"24CE123_Prince.";
    return 0;
}