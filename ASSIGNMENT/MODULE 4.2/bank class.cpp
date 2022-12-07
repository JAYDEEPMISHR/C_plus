#include<iostream>
using namespace std;
int ac_no, balance,deposit;
char name[20];
char account_type[20];

class bank_account
{
	public:
		void datamember()
		{
			cout<<"\nName of Depositer :" ;
			gets(name);
			
			cout<<"\nType of account : ";
			gets(account_type);
			
			cout<<"\nAccount Number : ";
			cin>>ac_no;

		}
		
		void deposit()
		{	
			int bal;
			cout<<"\nEnter the amout to deposite :";
			cin>>bal;
			
			balance+=bal;
			
			cout<<"\nAmount deposited successfuly\nYour New Balance:"<<balance;
		}
		
		void check()
		{
			int bal;
			
			cout<<"\nYour balance :"<<balance<<"\nEnter amount to withdraw:";
			cin>>bal;
			
			if(bal<=balance)
			{
				balance-=bal;
				cout<<"\nRemaining Balance:"<<balance;
			}
			else
			{
				exit(0);
			}
		}

		void display()
		{	
			cout<<"\nName :";
			puts(name);
			
			cout<<"\nBalance :"<<balance;
		}
};

main()
{
	bank_account b;
	b.datamember();
	b.deposit();
	b.check();
	b.display();
}
