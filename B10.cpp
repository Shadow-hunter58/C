#include<iostream> 
using namespace std; 
class Student 
{ 
    protected: 
        string name; 
        string usn; 
    public: 
        void readDetails() 
        { 
            cout<<"Enter the name: "<<endl; 
            cin>>name; 
            cout<<"Enter the USN: "<<endl; 
            cin>>usn; 
        } 
        void printDetails() 
        { 
                cout<<"Name \t: "<<name<<endl; 
                cout<<"USN \t: "<<usn<<endl; 
        } 
}; 
class Test: virtual public Student 
{ 
        protected: 
            int sub1,sub2; 
        public: 
            void getMarks() 
            { 
                cout<<"Enter Subject 1: "<<endl; 
                cin>>sub1; 
                cout<<"Enter Subject 2: "<<endl; 
                cin>>sub2; 
            } 
            void putMarks() 
            { 
                    cout<<"Sub1 marks \t: "<<sub1<<endl; 
                    cout<<"Sub2 marks \t: "<<sub2<<endl; 
            } 
}; 
class Sports: virtual public Student 
{ 
    protected: 
        int score; 
    public: 
        void getScore() 
        { 
            cout<<"Enter the score"<<endl; 
            cin>>score; 
        } 
        void putScore() 
        { 
            cout<<"Score  \t:"<<score<<endl; 
        } 
}; 
class Result: public Test,public Sports 
{ 
    private: 
        int total; 
    public: 
        void display() 
        { 
            total=sub1+sub2+score; 
            cout<<"Total \t:"<<total<<endl; 
             
        } 
}; 
 
int main() 
{ 
    int n; 
    cout<<"Enter the number of students: "<<endl; 
    cin>>n; 
    Result r[n]; 
    cout<<"Enter the student details: "<<endl; 
    for(int i=0;i<n;i++) 
    { 
        r[i].readDetails(); 
        r[i].getMarks(); 
        r[i].getScore(); 
        cout<<endl; 
    } 
    cout<<"The Student details are: "<<endl; 
    for(int i=0;i<n;i++) 
    {    
        r[i].printDetails(); 
        r[i].putMarks(); 
        r[i].putScore(); 
        r[i].display(); 
        cout<<"\n\n"; 
    } 
}   