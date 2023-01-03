#include<iostream>
using namespace std;

class calculator
{
	public:
			void display(int a,int b)
			{
				cout<<"Value of A: "<<a<<endl;
				cin>>a;
				
				cout<<"Value of B: "<<b<<endl;
				cin>>b;
			}
			
			void display(int a,int b,int add,int sub,int mul,int div)
			{
				add=a+b;
				cout<<"Addition: "<<add<<endl;
				
				sub=a-b;
				cout<<"Subtraction: "<<sub<<endl;
				
				mul=a*b;
				cout<<"Multiplication: "<<mul<<endl;
				
				div=a/b;
				cout<<"Division: "<<div<<endl;
			}			
};

main()
{
	calculator c;
	c.display(10,5);
	c.display(10,5,15,5,50,2);
}
