#include<iostream>
using namespace std;
class Time
{
	private :
		int hour,sec,min;
	public :
		void settime()
		{
			cout<<"Enter Time :"<< endl<<"hours=";
			cin>>hour;
			cout<<"minutes=";
			cin>>min;
			cout<<"seconds=";
			cin>>sec;
			fixtime();
		}
		
		void fixtime()
		{
				while(min>=60)
			{
					min=min-60;
				hour+=1;
			}
			while(sec>=60)
			{
			sec=sec-60;
				min+=1;	
		}}
		void showtime()
		{
			cout<<"Time= "<<hour<<":"<<min<<":"<<sec<<endl;
		}

	Time add(Time a,Time b)
	{
		Time c;
		c.hour=a.hour+b.hour;
		c.min=a.min+b.min;
		c.sec=a.sec+b.sec;
		fixtime();
		cout<<"sum of "<<a.hour<<":"<<a.min<<":"<<a.sec<<" and "<<b.hour<<":"<<b.min<<":"<<b.sec<<" is "<<c.hour<<":"<<c.min<<":"<<c.sec<<endl;
		return c;
	}
	};
int main()
{
	Time t1,t2,t3;
	t1.settime();
	t1.showtime();
	t2.settime();
	t2.showtime();
	t3=t3.add(t1,t2);
	
}
