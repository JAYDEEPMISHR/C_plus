#include<iostream>
using namespace std;


main()
{
	int i,num,fact=1;
	
	cout<<"Give one integer number= ";
	cin>>num;
	
		for(i=1;i<=num;i++)
		fact=fact*i;
		{
			cout<<"Factorial of given number is= "<<fact<<endl;
		}
	
}

