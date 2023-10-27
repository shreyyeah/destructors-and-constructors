//22070123114
//constructoroutsideclass
#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;

    public:
    student();
    void display();
};
/*Defining a constructor outside the class*/
student::student()
{
     cout<<"Enter the rollno:";
        cin>>rollno;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Fee:";
        cin>>fee;
}

void student::display()
{
     cout<<endl<<rollno<<"\t"<<fee<<"\t"<<name;
}
int main()
{
    student s;
    s.display();
}