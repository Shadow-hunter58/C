#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    A(int a)
    {
        this->a=a;
    }
    friend void compare(A p,B q);
};


class B 
{
    int b;
    public:
    B(int b)
    {
        this->b=b;
    }
    friend void compare(A p,B q);
};

void compare(A p,B q)
{
        int ans;
        if(p.a>q.b)
            cout<<"A is greater "<<endl;
        else
            cout<<"B is greater "<<endl;
}
int main()
{
        A ac(100);
        B bc(90);
        compare(ac,bc);
}

