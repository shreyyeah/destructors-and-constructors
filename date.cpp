//exp12
//22070123114
#include<iostream>
using namespace std;
class date
{
   int d;
   int m;
   int y;
/* Defining the constructor inside the class*/
   public:
   date()
   {
    cout<<"Enter day:"; //input the values
    cin>>d;
    cout<<"Enter month:";
    cin>>m;
    cout<<"enter year:";
    cin>>y;
    cout<<d<<"/"<<m<<"/"<<y<<endl; 
   }
};
int main()
{
    date d1;
}