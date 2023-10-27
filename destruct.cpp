//22070123114
//destructors
#include<iostream>
using namespace std;
int count = 0;
class destruct
{
public:
destruct()
{
    count++;
    cout<<"The count is:"<<count<<endl;
}
~destruct()
{
    count--;
    cout<<"The count is:"<<count<<endl;
}
};
int main()
{
    destruct aa,bb,cc;
    {
      destruct dd;
    }
    return 0;
}