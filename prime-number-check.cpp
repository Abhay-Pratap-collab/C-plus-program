#include<iostream>
using namespace std;
int main()
{
	int c=0,num;
	cout<<"Enter Number ";
	cin>>num;
	for(int i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			c++;// f c==2 this means this is prime number because prime number is divided by 1 and yourself
		}
	}
	if(c==2)
	{
		cout<<"This Is Prime ";
	}
	else 
	{
		cout<<"not";
	}
	
}
