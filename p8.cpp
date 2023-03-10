#include<iostream>

using namespace std;

class A
{
   public: void fun()
    {
        cout<<"Hello A"<<endl;
    }
    public: void fun(int a,int b)
    {
        cout<<a<<"  "<<b<<endl;
    }
};

int main()
{
    A obj1;
    obj1.fun();
    obj1.fun(5,6);
   return 0;
}
