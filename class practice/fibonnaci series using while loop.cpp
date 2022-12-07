#include<iostream>
using namespace std;
main()
{
	int n,n1=0,n2=1,next_term=0;

	
	cout<<"ENTER ONE INTEGER NUMBER: ";
	cin>>n;
	
	cout<<"Fibonacci Series is : "<<n1;
	cout<<" "<<n2;
	
	next_term=n1+n2;
	
	while(next_term<=n)
	{
		cout<<" "<<next_term;
		n1=n2;
		n2=next_term;
		next_term=n1+n2;
	}
}
