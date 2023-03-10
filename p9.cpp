#include<iostream>

using namespace std;

class A
{
    public:int a=1;
    void fun()
    {
        cout<<"Hello "<<a<<endl;
    }
};
class B:A
{
   public: void read()
{
        cout<<"Hello B"<<a<<endl;

}
};

int main()
{
    A obj1;
   B obj2;
    obj1.fun();
    obj2.read();
   return 0;
}
