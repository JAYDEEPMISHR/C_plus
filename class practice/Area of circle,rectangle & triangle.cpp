#include<iostream>
using namespace std;

main()
{
	int l,b,h,r,choice;
	float pi=3.14,area;
	
	cout<<"1. Area of circle"<<endl;
	cout<<"2. Area of rectangle"<<endl;
	cout<<"3. Area of triangle"<<endl;
	
	cout<<"Enter Your Choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"You choose to find area of circle"<<endl;
			
			cout<<"Give Value of Radius(r)= ";
			cin>>r;
			
			area=pi*r*r;
			
			cout<<"Area of Circle = "<<area<<endl;
			break;
			
		case 2:
			cout<<"You choose to find area of rectangle"<<endl;
			
			cout<<"\nGive value of Length(l)= ";
			cin>>l;
			
			cout<<"\nGive value of Breadth(b)= ";
			cin>>b;
			
			area=l*b;
			
			cout<<"Area of Ractangle= "<<area<<endl;
			break;
			
		case 3:
			cout<<"You choose to find area of triangle"<<endl;
			
			cout<<"\nGive value of Base(b)= ";
			cin>>b;
			
			cout<<"\nGive value of Height(h)= ";
			cin>>h;
			
			area=0.5*b*h;
			
			cout<<"\nArea of triangle= "<<area<<endl;
			break;
				
		default:
			cout<<"Given Choice is not in a list"<<endl;	
	}
}
