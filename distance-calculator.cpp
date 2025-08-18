#include<iostream>
using namespace std;
class Distance
{
	private :
		int cm,km,m;
	public :
		void putValue()
		{
			cout<<"Enter cm : ";
			cin>>cm;
			cout<<"Enter m : ";
			cin>>m;
			cout<<"Enter km : ";
			cin>>km;
		}
		void getValue()
		{
			cout<<km<<"kilometer, "<<m<<"meter, "<<cm<<"centimeter, ";
			
		}
		Distance add(Distance);
		
		
};
Distance Distance::add(Distance A)
{
	Distance R;
	R.km=km+A.km;
	R.m=m+A.m;
	R.cm=cm+A.cm;
	R.m=R.m+(R.cm/100);
	R.cm=R.cm%100;
	R.km=R.km+(R.m/1000);
	R.m=R.m%1000;
	return(R);
	
}
int main()
{
	Distance D1,D2,D3;
	D1.putValue();
	D2.putValue();
	D3=D1.add(D2);
	D3.getValue();
}
