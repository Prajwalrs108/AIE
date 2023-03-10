#include<iostream>
using namespace std;
int main()
{
    int a=5,b=5,c[10],i,count=0;
    cout<<"Enter the array"<<endl;
    for(i=0;i<5;i++)
    {
    cin>>c[i];
    }
  
    for(i=0;i<5;i++)
    {
   if(c[i]>=a&&c[i]>=b)
   {
        count++;
   }
   
    }
    cout<<"No of shoots is:"<<count;
   return 0;
}