

#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    complex(int a,int b)
    {
        real=a;
        img=b;
    }
    complex()
    {
        real=0;
        img=0;
    }
    void display()
    {
       // cout<<"The complex numbers are :"<<endl;
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    friend complex operator+(complex c1,complex c2);
    friend complex operator-(complex c1,complex c2);
};

complex operator+(complex c1,complex c2)
{
    return complex(c1.real+c2.real,c1.img+c2.img);
}
complex operator-(complex c1,complex c2)
{
    return complex(c1.real-c2.real,c1.img-c2.img);
}

int main()
{
    complex c1(2,3);
    complex c2(3,4);

    cout<<"Addition of complex number"<<endl;
    complex c3=c1+c2;
    c3.display();
    cout<<"Subtraction of complex number"<<endl;   
    c3=c1-c2;
    c3.display();
    return 0;
}

