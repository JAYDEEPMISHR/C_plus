#include<iostream>
using namespace std;
class student
{
	public:
		
		void display(int a)
		{
			cout<<" A : "<<a<<endl;
		}
		
		void display(int a, float f)
		{
			cout<<" A : "<<a<<endl;
			cout<<" F : "<<f<<endl;
		}
};

main()
{
	student s;
	s.display(10);
	s.display(20,30.5);
}
