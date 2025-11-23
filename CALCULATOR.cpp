//CALCULATOR

#include<iostream>
using namespace std;

int main()
{
	int r,t;
	char i;
	cin>>r>>i>>t;
	switch(i)
	{
		case '+':
			cout<<(r+t);
			break;
		case '-':
			cout<<(r-t);
			break;
		case '*':
			cout<<(r*t);
			break;
		case '/':
			cout<<(r/t);
			break;
	}
	return 0;
}
