#include<iostream> 
using namespace std; 
template<typename T> 
void Bsort(T a[],int n) 
{ 
    T temp; 
    int i,j; 
    for(i=0;i<=n-2;i++) 
        for(j=0;j<=n-2-i;j++) 
            if(a[j+1]<a[j]) 
            { 
                temp=a[j]; 
                a[j]=a[j+1]; 
                a[j+1]=temp; 
            } 
         
   
} 
int main() 
{ 
    cout<<"--------------------"<<endl; 
    cout<<"Integer array sort"<<endl; 
   cout<<"--------------------"<<endl; 
    int n,i; 
    cout<<"Enter the no. of elements: "; 
    cin>>n; 
    int a[n]; 
    cout<<"Enter array elements"<<endl; 
    for(i=0;i<n;i++) 
        cin>>a[i]; 
    cout<<"Array elements before sor ng"<<endl; 
    for(i=0;i<n;i++) 
        cout<<a[i]<<" "; 
    Bsort(a,n); 
    cout<<"\nArray elements a er sor ng"<<endl; 
    for(i=0;i<n;i++) 
        cout<<a[i]<<" "; 
         
    cout<<"\n--------------------"<<endl; 
    cout<<"Float array sort"<<endl; 
    cout<<"--------------------"<<endl; 
    cout<<"Enter the no. of elements: "; 
    cin>>n; 
    float b[n]; 
    cout<<"Enter array elements"<<endl; 
    for(i=0;i<n;i++) 
cin>>b[i]; 
cout<<"Array elements before sor ng"<<endl; 
for(i=0;i<n;i++) 
cout<<b[i]<<" "; 
Bsort(b,n); 
cout<<"\nArray elements a er sor ng"<<endl; 
for(i=0;i<n;i++) 
cout<<b[i]<<" "; 
}