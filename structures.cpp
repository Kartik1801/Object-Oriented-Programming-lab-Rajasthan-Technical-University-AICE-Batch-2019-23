#include <iostream>
using namespace std;
struct complex 
{
	private:
		int r,i;				//Encapsulation	: Binding of data and methods into a single unit.
	public :
		void setdata (int x,int y)
		{
			r=x;
			i=y;
		}
		void showdata();
};
void complex::showdata()
		{
			cout<<r<<"+"<<"i"<<i;
		}	

int main()
{
	complex c1;
	c1.setdata(3,4);		//here, the variable c1 can access complex type variable using member function.
	c1.showdata();
	return 0;
}
