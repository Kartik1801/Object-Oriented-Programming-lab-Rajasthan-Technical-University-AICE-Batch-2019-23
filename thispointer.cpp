/*this pointer:
->this is a keyword.
->this is a local object pointer in every instance member function containing
the address of the caller object.
->this pointer is used to refer caller object of member function*/
#include<iostream>
using namespace std;
class box
{
	private:
	int l,b,h;
	public:
		void setdimention(int l,int b,int h)
		{
			this->l=l;//without using this there will be naming conflict and compiler wukk give preference to the local variables
			this->b=b;
			this->h=h;
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
	box small_box;
	small_box.setdimention(12,14,16);
	small_box.showdimentions();
}

