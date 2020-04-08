#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter the number ";
	cin>>n;
	
	try
	{
		if(n>0)
		
		{
			throw n;
		}
		
		else
		{
			throw 'e' ;
		}
		
		if(n<=0)
		{
			throw n ;
		}
	}
	
	
	catch(int no)
	{
		cout<<" Number input by user "<<no;
	}
	catch(char ch)
	{
		cout<<" Character input by user "<<ch;
	}
	
	catch(float p)
	{
		cout<<" input less than one "<<p;
	}
	
}