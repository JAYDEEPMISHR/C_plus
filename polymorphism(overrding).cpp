#include<iostream>
using namespace std;
class A
{
	public:
		void display()
		{
			cout<<"\n HELLO A";
		}
};

class B : public A
{
	public:
		void display()
		{
			A::display();
			cout<<"\n HELLO B";
		}		
};

main()
{
	B obj;
	obj.display();
}
