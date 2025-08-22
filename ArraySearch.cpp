#include<iostream>
using namespace std;
class Array
{
	private :
		int x[100],size;
	public :
		void putArray(int);
		void getArray();
		int indexOf(int);
		int valueAt(int);
		// out side the class because you use the for loop that's why 
		
};
int Array::valueAt(int index)
{
	
		if(index>=0 && index<size)
		{
			return(x[index]);// search by value and print index
		}
		else
		{
			return(-1);
		}
	
}
int Array::indexOf(int value)// search by index and print the value 
{
	for(int i=0;i<size;i++)
	{
		if(x[i]==value)
		{
			return(i);
		}
	}
	return(-1);
}
void Array::putArray(int s)
{
	size=s;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter number "<<i<<":";
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
int main()
{
	Array A,B;
	A.putArray(5);
//	B.putArray(3);
	A.getArray();
//	B.getArray();
	int i;
	cout<<endl;
	i=A.indexOf(33);// search by value and print index
	cout<<i<<endl;
	i=A.valueAt(2);// search by index and print the value 
	cout<<i<<endl;
	
}
