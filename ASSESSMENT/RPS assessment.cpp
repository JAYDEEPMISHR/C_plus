#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main()
{
	int computer,i,choice;
	int round;
	char name[50];
	srand(time(0));
	
	
	
	cout<<"*--*--*--*--*--*--*--*--*--*--*--"<<endl;
	cout<<"              NAME               "<<endl;
	cout<<"*--*--*--*--*--*--*--*--*--*--*--"<<endl;

	cout<<"Enter Your Name : ";
	cin>>name[50];
	fflush(stdin);
		
	cout<<"How many Rounds you want to play? :";
	cin>>round;
	
	for(i=1;i<=round;i++)
	{
		cout<<"1)Rock"<<endl<<"2)Paper"<<endl<<"3)Scissor"<<endl;   // Give options to the user
		cout<<"Enter Your choice: ";
		cin>>choice;
				
			computer= rand()%3+ 1;                      // Computer Choose random number
			
			if(computer==1) 
			{
				cout<<"Computer's choice: 1"<<endl;
			}
			else if(computer==2)
			{
				cout<<"Computer's choice: 2"<<endl;
			}
			else
			{
				cout<<"Computer's choice: 3"<<endl;
			}
		   
		   // Now compare choices
		   
		   if(choice==computer)
		    {
		    	cout<<"Tie"<<endl<<endl;
			}
			
		  // User chooses Rock
		   
			else if(choice==1)
			{
				if(computer==2)
				{
					cout<<"You Loose"<<endl<<endl;       // Paper covers Rock that's why you Lost match
				}
				if(computer==3)
				{
					cout<<"You win"<<endl<<endl;        // Rock smashes scissor that's why you win.
				}
			}
			
		  // User chooses Paper 
		  
		  	else if(choice==2)
			{
				if(computer==1)
				{
					cout<<"You win"<<endl<<endl;        // Paper covers rock that's why you win.
				}
				if(computer==3)
				{
					cout<<"You loose"<<endl<<endl;     // Scissor cut the paper.
				}
			}
			
	     // User chooses Scissors
		 
		 	else if(choice==3)
			{
				if(computer==1)
				{
					cout<<"You loose"<<endl<<endl;      // Rock smashes scissor that's why you loose.
				}
				if(computer==2)
				{
					cout<<"You win"<<endl<<endl;        // Scissor cut Paper.
				}
			}	
	}
}
