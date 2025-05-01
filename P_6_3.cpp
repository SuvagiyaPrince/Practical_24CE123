#include<iostream>
using namespace std;

int main()
{
    int n,m;

    cout<<"Enter the size of First array (n) : ";
    cin>>n;
    cout<<"Enter the size of Second array (m) : ";
    cin>>m;

    int *arr1 = new int[n];
    int *arr2 = new int[m];

    cout<<"Enter the elements of First sorted array : ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of Second sorted array : ";
    for(int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    
    int *Merge = new int[n+m];
    int i=0,j=0,k=0;

    while(i < n , j < m)
    {
        if(arr1[i] < arr2[j])
        {
            Merge[k++] = arr1[i++];
        }
        else
        {
            Merge[k++] = arr2[j++];
        }
    }

    while(i < n)
    {
        Merge[k++] = arr1[i++];
    }
    while(j < m)
    {
        Merge[k++] = arr2[j++];
    }

    for(int k=0;k<n+m;k++)
    {
        cout<<Merge[k]<<" ";
    }
    cout<<endl;
    
    cout<<"23CE123_Prince."<<endl;
    return 0;
}