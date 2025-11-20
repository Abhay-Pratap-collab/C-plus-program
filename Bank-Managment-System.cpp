#include<iostream>
using namespace std;
class SBI
{
	private :
		int ac;
		string name;
		int balance;
//		static long bankbalance;
	public :
		void openAccount()
		{
			cout<<"Enter Account Number : ";
			cin>>ac;
			cout<<"Enter Name : ";
			cin>>name;
			cout<<"Enter Balance : ";
			cin>>balance;
//			bankbalance=bankbalance+balance;
			
		}
		void heading()
        {
            cout << "\t\t\t-----------------------------------------------------------------------" << endl;
            cout << "\t\t\t\t\t\t\tAccount Details  " << endl;
            cout << "\t\t\t-----------------------------------------------------------------------" << endl;
            cout << "\t\t\t\t\b\b\bAccount Number \t\tName\t\tBalance " << endl;
        }
       
		
		void displayAccount()
		{
			cout<<"\t\t\t\t\b\b\b"<<ac<<"\t\t\t\t"<<name<<"\t\t"<<balance<<endl;
			
	}
	void withdrawl()
	{
		int w;
		cout<<"Enter Amount you want to withrawl : ";
		cin>>w;
		if(w<=balance)
		{
			balance=balance-w;
//			bankbalance=bankbalance-w;
			cout<<"Available Balance : "<<balance<<endl;
		}
		else 
		{
			cout<<"insufficinet fund"<<endl;
		}
		
	}
	void deposit()
	{
		int d;
	cout<<"Enter Amount you want to deposit ";
		cin>>d;
		balance=balance+d;
//		bankbalance=bankbalance+d;
		cout<<"Total Balance : "<<balance<<endl;

		
		
		
			}
	int search(int c)
	{
			if(c==ac)
	{
		displayAccount();
		return 1;
	}
	return 0;
	}
	
};
//long SBI::bankbalance = 0;

int main()
{
	SBI S[3];
	int i,f,ch;
	for(i=0;i<=2;i++)
	{
		S[i].openAccount();
	}
	do
	{
	
	 cout << "Main Menu" << endl;
    cout << "1: Display All" << endl;
    cout << "2: Search " << endl;
    cout << "3: Withdrawl " << endl;
    cout << "4: Deposit " << endl;
    cout << "Enter your choice: ";
    cin >> ch;
	
	switch(ch)
	{
		case 1:
	S[0].heading();
	for(i=0;i<=2;i++)
	{
		S[i].displayAccount();
	}
	break;
	
	case 2:
		int acn,f;
		cout<<"Enter Account Number : ";
		cin>>acn;
		S[0].heading();
		for(i=0;i<=2;i++)
		{
			f=S[i].search(acn);
			if(f==1)
			{
				break;
			}
		
		}
		 
			break;
		case 3:
			int an,x;
		cout<<"Enter Account Number : ";
		cin>>an;
		S[0].heading();
		for(i=0;i<=2;i++)
		{
			x=S[i].search(an);
			if(x==1)
			{
				S[i].withdrawl();
				break;
				
			
			}
		
		}
			break;
		case 4:
			int a,y;
			cout<<"Enter Account Number : ";
			cin>>a;
			S[0].heading();
			for(i=0;i<=2;i++)
			{
				y=S[i].search(a);
				if(y==1)
				{
					S[i].deposit();
					break;
					
				
				}
			
			}
			break;
			
		
		
		
}} while(ch!=5);
	
}
