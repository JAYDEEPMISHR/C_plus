#include<iostream>
using namespace std;

int tr,ar,in,notout;
char name[20];

	
class cricketer
{
	public:
		
		void average()
		{
			ar=tr/(in-notout);
		}		
		void readdata()
		{
			cout<<"\nName of player :";
			gets(name); 
			cout<<"\nEnter number of innings played by player :";
			cin>>in;
			cout<<"\nTotal Runs score by player :";
			cin>>tr;
			cout<<"\nHow many times player is become notout? : ";
			cin>>notout;
			average();
		}		
};

class batsman: public cricketer
{
	public:
		 void displaydata()
		 {
		 	cout<<"\nNo. of innings played :"<<in<<endl;
		 	cout<<"Total runs :"<<tr<<endl;
		 	cout<<"How many times playes is notout? : "<<notout<<endl;
		 	cout<<"Average run of player :"<<ar;
		 }
};

int main()
{
	batsman b;
	b.readdata();
	b.displaydata();
}
