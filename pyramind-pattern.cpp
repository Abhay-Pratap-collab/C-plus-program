#include<iostream>
using namespace std;
int main()
{
	int x=0,a=5;
	for(int i=1;i<=4;i++)
	{
		// spaces;
		for(int s=a;s>=1;s--)
		{
			cout<<" ";
		}
		a--;
		// num 1;
		for(int j=1;j<=i;j++)
		{
			cout<<j<<",";
			
		}
		// num 2;
		
			for(int b=x;b>=1;b--)
			{
				cout<<b<<",";
			}
			x++;
			cout<<endl;		
	}
}
