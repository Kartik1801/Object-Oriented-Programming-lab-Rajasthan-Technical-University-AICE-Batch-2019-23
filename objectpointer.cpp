#include<iostream>
using namespace std;
class box
{
	int l,b,h;
	public:
		void setdimention(int x,int y,int z)
		{
			l=x;
			b=y;
			h=z;
		}
		void showdimentions()
		{
			cout<<"Length= "<<l<<endl;
			cout<<"Breadth= "<<b<<endl;
			cout<<"Height= "<<h<<endl;
		}
};
int main()
{
	box small_box,*p;
	p=&small_box;
	//small_box.setdimention(12,14,16);
	//small_box.showdimentions();doing using pointer
	p->setdimention(12,14,16);
	p->showdimentions();
	small_box.showdimentions();
	
}
