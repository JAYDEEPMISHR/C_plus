#include<iostream>
using namespace std;
class calculator
{
	int a,b,c;
		public:
		
		void inputdata()
		{
			cout<<"ENTER VALUE OF A=";
			cin>>a;
			
			cout<<"ENTER VALUE OF B=";
			cin>>b;
		}
		void displaydata()
		{
			c=a+b;
			cout<<"\nSUMMATION OF GIVEN NUMBER="<<c<<endl;
			
			c=a-b;
			cout<<"SUBTRACTION OF GIVEN NUMBER="<<c<<endl;
			
			c=a*b;
			cout<<"MULTIPLICATION OF GIVEN NUMBER="<<c<<endl;
			
			c=a/b;
			cout<<"DIVISION OF GIVEN NUMBER="<<c<<endl;
			
			c=a%b;	
			cout<<"MODULO OF GIVEN NUMBER="<<c<<endl;
		}			
};
main()
{
	calculator c1;
	c1.inputdata();
	c1.displaydata();
}
