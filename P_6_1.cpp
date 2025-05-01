#include<iostream>
using namespace std;

class DynamicArray
{
    private:
    int *Data;
    int size;
    int capacity;

    void resize()
    {
        capacity *= 2;
        int *NewData = new int[capacity];
        for (int i = 0; i < size; i++)
        {
            NewData[i] = Data[i];
        }
        delete[] Data;
        Data = NewData;
    }

    public:
    DynamicArray(int initial_capacity = 4)
    {
        capacity = initial_capacity;
        size = 0;
        Data = new int[capacity];
    }

    ~DynamicArray()
    {
        delete[] Data;
    }
    
    void insert(int value)
    {
        if (size == capacity)
        {
            resize();
        }
        Data[size++] = value;
    }

    void remove(int index)
    {
        if(index < 0 || index >= size)
        {
            cout<<"Invalid index."<<endl;
            return;
        }
        for(int i = index; i < size-1; i++)
        {
            Data[i] = Data[i+1];
        }
        size--;
    }

    int get(int index) const
    {
        if(index < 0 || index >= size)
        {
            cout<<"Invalid index."<<endl;
            return -1;
        }
        return Data[index];
    }

    int getSize() const
    {
        return size;
    }

    void display() const
    {
        for(int i = 0; i < size; i++)
        {
            cout<<Data[i]<<" ";
        }
        cout<<endl;
    }  
};

int  main()
{
    DynamicArray arr;
    
    arr.insert(10);
    arr.insert(20);
    arr.insert(30);
    arr.insert(40);

    arr.display();

    cout<<"Removing element at index"<<endl;
    arr.remove(1); 
    arr.display();

    cout<<"Size of array: "<<arr.getSize()<<endl;
    cout<<"Element at index 2: "<<arr.get(2)<<endl;

    arr.insert(50);
    arr.insert(60);
    arr.insert(70);

    arr.display();


    

    cout<<"24CE123_Prince."<<endl;
    return 0;
}