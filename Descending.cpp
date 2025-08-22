#include<iostream>
using namespace std;
class Array
{
	private :
		int x[100],size;
	public :
		void putArray(int);
		void getArray();
		int sort();
		
		
};
void Array::putArray(int s)
{
	size=s;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter number ";
		cin>>x[i];
	}
}
void Array::getArray()
{
	for(int i=0;i<size;i++)
	{
		cout<<x[i]<<",";
	}
}
int Array::sort()
{
	int i,j,t;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(x[j+1]>x[j])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
	}
}
int main()
{
	Array A;
	A.putArray(5);
	A.sort();
	A.getArray();
	
}
