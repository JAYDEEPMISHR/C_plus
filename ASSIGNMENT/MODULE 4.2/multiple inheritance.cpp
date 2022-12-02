#include<iostream>
using namespace std;

char name[20];
int age,salary,percentage;

class person
{
	public:
		
		void getdata()
		{
			cout<<"ENTER NAME :"<<endl;
			gets(name);
			cout<<"ENTER AGE :"<<endl;
			cin>>age;
		}
		
};

class student
{
	public:
	
	void readdata()
	{
		cout<<"ENTER NUMBER OF PERCENTAGE STUDENT :"<<endl;
		cin>>percentage;
	}	
};

class teacher: public person,public student
{
	public:
		void data()
		{
			cout<<"ENTER SALARY :"<<endl;
			cin>>salary;
		}
};

int main()
{
	teacher t;
	t.getdata();
	t.readdata();
	t.data();
}
