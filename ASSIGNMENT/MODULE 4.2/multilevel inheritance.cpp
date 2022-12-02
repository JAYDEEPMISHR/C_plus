#include<iostream>
using namespace std;

int r_no,a,b,total;

class Students
{
	public:
			void studentdata()
			{
				cout<<"ENTER ROLL NUMBER= ";
				cin>>r_no;
			}	
};

class Test: public Students
{
	public:
			void marksdata()
			{
			cout<<"\nMarks obtained in Subject 1= ";
			cin>>a;
			
			cout<<"\nMarks obtained in Subject 2= ";
			cin>>b;
			}	
};

class Result: public Test
{
	public:
	
			void totaldata()
			{
			total=a+b;
			cout<<"\nTotal Marks obtained by Student= "<<total;
			cout<<"\nRoll number of student= "<<r_no;\
			}
};

int main()
{
	Result r;
	r.studentdata();
	r.marksdata();
	r.totaldata();	
}
