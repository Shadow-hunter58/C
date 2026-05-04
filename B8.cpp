#include<iostream> 
using namespace std; 
class Alpha 
{ 
    protected: int x; 
    public: 
    Alpha(int x) 
    { 
        this->x=x; 
    } 
}; 
class Beta 
{ 
    protected: int y ; 
    public: 
    Beta(int y) 
    { 
        this->y=y; 
    } 
}; 
class Gamma:Alpha,Beta 
{ 
    private: int z; 
    public: 
    Gamma(int x,int y,int z):Alpha(x),Beta(y) 
    { 
        this->z=z; 
    } 
     void display() 
    { 
        cout<<"Value of x from Alpha: "<<x<<endl; 
        cout<<"Value of y from Beta: "<<y<<endl; 
        cout<<"Value of z from Gamma: "<<z<<endl; 
    } 
}; 
 
int main() 
{ 
    Gamma g(10,20,30); 
    g.display(); 
    return 0; 
} 