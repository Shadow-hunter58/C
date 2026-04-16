#include<iostream>
using namespace std;


int main()
{
    cout<<"Enter the size of array : "<<endl;
    int n;
    cin>>n;
    int *arr=new int[n];
     cout<<"\nEnter elements for array : "<<endl;
     for(int i=0;i<n;i++)
        cin>>arr[i];
     cout<<"\nARRAY elements  : "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    delete arr;

   return 0;
}