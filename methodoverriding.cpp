#include<iostream>
using namespace std;
class car
{
    public:
    virtual void acon()
    {
        cout<<"AC of car class"<<endl;
    }
};
class sportscar: public car
{
    public:
    void acon()                                                         //Method overriding
    {
        cout<<"AC of sportscar class"<<endl;
    }
};
int main()
{
    sportscar rollsroy;
    rollsroy.acon();        

    return 0;
}