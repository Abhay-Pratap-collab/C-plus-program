#include<iostream>
using namespace std;
class Time
{
	private :
		int s;
		int m;
		int h,d;
	public :
		void getValues()
		{
			cout<<"Enter Second ";
			cin>>s;
			cout<<"Enter min ";
			cin>>m;
			cout<<"Enter HOur ";
			cin>>h;
			
		}
		void putValues()
		{
		
        cout << d << " day, " << h << " hour, "
             << m << " minute, " << s << " second\n";
			
		}
		Time add(Time);
		};
		Time Time::add(Time A)
		{
			Time R;
			R.h=h+A.h;
			R.m=m+A.m;
			R.s=s+A.s;
			R.m=R.m+(R.s/60);
			R.s=R.s%60;
			R.h=R.h+(R.m/60);
			R.m=R.m%60;
			R.d=R.h/24;
			
			R.h=R.h%24;
			
			return(R);
		}
		int main()
		{
			Time T1,T2,T3;
			T1.getValues();
			T2.getValues();
			T3=T1.add(T2);
			T3.putValues();
		}
		
