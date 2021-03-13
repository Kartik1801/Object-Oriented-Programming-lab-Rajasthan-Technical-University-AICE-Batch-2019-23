#include<iostream>
using namespace std;
class car				//Parent Class
{
	private:
		int color;
		char fuel;
	public:
		void getdate()
		{
			cout<<"Choose the color of the car : \n1.Silver\n2.Golden\n3.Black"<<endl;
			cin>>color;
			cout <<"Enter the fuel type: "<<endl;
			cin>>fuel;
		}
		void showdata()
		{
			if(color==1)
			cout<< "your car color is : Silver"<<endl;
			else if(color==2)
			cout<< "your car color is : Golden"<<endl;
			else
			cout<< "your car color is : Black"<<endl;
			cout<<"your  car fuel type is : "<<fuel<<endl;
			}
				
};
class sports_car:public car			//everything is to be inherited 
{
	private:
		int maxspeed;
		int alarm;
		int airbags;
	public:
		void input()
		{
			cout<<"Enter the max speed of your car";
			cin>>maxspeed;
			cout <<"Enter the no of alarms: ";
			cin>>alarm;
			cout <<"Enter the no. of airbags "<<endl;
			cin>>airbags;
		}
		void show()
		{
		
			cout<< "your car max speed is : "<<maxspeed<<endl;
			cout<< "your car have "<<alarm<<"alarms"<<endl;
			cout<<"your  car has "<<airbags<<"airbags"<<endl;
			}
};
int main()
{
	sports_car a;
	a.getdate();
	a.input();
	a.show();
	a.showdata();
}
