#include<iostream>
using namespace std;
class base
{
    public:
    void fun()
    {
        cout<<"this is parent class function "<<endl;
    }
    void fun(int a)
    {
        cout<<"this is parent class function with value  "<<a<<endl;
    }
};
class child: public base
{
    public:
    void fun()
    {
        cout<<"this is child class function "<<endl;
    }
};
int main()
{
    child obj;
    //obj.fun(10); //will show error due to early binding it will
    obj.fun();
    return 0;
}