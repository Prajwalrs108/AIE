#include<iostream>
#include<string>
using namespace std;
int main()
{
    int f,i,n;
    string a,b,c;
   char g;
   cout<<"Enter two strings:\n";
   cin>>a;
   cin>>b;
   while(f!=5){
    cout<<"1.Concatenate\n2.Reverse\n3.Replace\n4.Access\n5.Exit\n";
    cout<<"Enter the choice"<<endl;
    cin>>f;
    switch(f)
    {
  //Concatenate String  
    case 1 :
         c= a+" "+b+"\n";
        cout<<c; 
        break;

  //Reverse String
        case 2 :
        for(i=c.size()-1;i>=0;i--)
         {
          cout<<c[i];
         }
         cout<<"\n";
         break;
  //Replace char in a string
        case 3:
         cout<<"Enter the character\n ";
         cin>>g;
          cout<<"Enter index no \n";
         cin>>n;
         c[n]=g;
         cout<<c;
          break;
          case 4:
    
          cout<<"Enter index no \n";
         cin>>n;
         cout<<c[n];
         case 5:return 0; 
        default: cout<<"Invalid choice";
          break;
   }
   }
    return 0;
}