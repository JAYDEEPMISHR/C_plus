#include<iostream>
using namespace std;

main()
{
	int i,n,n1=0,n2=1;
	int next_term=n1+n2;
	
	cout<<"Give one integer number: ";
	cin>>n;
	
	cout<<"Fibonacci Series : "<<n1;
	cout<<" "<<n2;
	
	for(i=3;i<=n;i++)
	{
		cout<<" "<<next_term;
		
		n1=n2;
		n2=next_term;
		next_term=n1+n2;
	}
}
