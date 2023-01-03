#include <iostream>
using namespace std;

template<class T>

void swapme(T &x, T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cout<<"Enter two integer values: ";
	cin>>a>>b;
	swapme(a, b);
	
	cout<<"After swap a = "<<a<<", b = "<<b<<endl;
}
