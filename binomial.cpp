#include<iostream>
using namespace std;
int factorial(int n )

{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f*=i;
	}
	return(f);
	
	

}
int nCr(int n,int r)
{
	int fcn=factorial(n);
	int fcr=factorial(r);
	int fm=factorial(n-r);
	return fcn/(fcr*fm);
	
}
int main()
{
	int n=8,r=2;
	cout<<nCr(n,r);
	
}
