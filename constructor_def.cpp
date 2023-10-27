//2070123114
//defaultconstructors
#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;
/*Defining a constructor*/
    public:
    student ()
    {
        cout<<"Enter the rollno:";
        cin>>rollno;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Fee:";
        cin>>fee;
    }
/*Defining a function*/
    void display()
    {
        cout<<endl<<rollno<<"\t"<<fee<<"\t"<<name;
    }

};
int main()
{
    student s;/*Constructor is automatically called when an object is created */
    s.display();

}