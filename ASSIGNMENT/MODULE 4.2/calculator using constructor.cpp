#include<iostream>
using namespace std;

class calculator
{
	public:
	
			int a,b,sum,sub,mul,div;
			
			calculator()
			{
				cout<<"ENTER A VALUE OF A: ";
				cin>>a;
				
				cout<<"ENTER A VALUE OF B: ";
				cin>>b;
				
				sum=a+b;
				cout<<"SUMMATION OF A & B :"<<sum<<endl;
				
				sub=a-b;
				cout<<"SUBTRACTION OF A & B :"<<sub<<endl;
				
				mul=a*b;
				cout<<"MULTIPLICATION OF A & B :"<<mul<<endl;
				
				div=a/b;
				cout<<"DIVISION OF A & B :"<<div<<endl;	
			}
			
			void display()
			{
				cout<<endl<<sum<<"\t"<<sub<<"\t"<<mul<<"\t"<<div;
			}	
};

main()
{
	calculator c;
	c.display();
}
