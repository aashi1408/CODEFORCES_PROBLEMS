//NUMBERS_HISTOGRAM

#include<iostream>
using namespace std;

void op_printer(int i,char op)// i and op are parameters
{
	for(int j=1 ; j<=i ;j++)
	{
		cout<<op;//printing operator i times
	}
	cout<<endl;
}

int main()
{
	char op;//operator input
	cin>>op;
	int N;//number/count of numbers which we are going to input
	cin>>N;
	
	for(int v=1; v<=N ;v++)
	{
		int x;
		cin>>x;
	
		op_printer(x,op);//x and op are arguments
	}
	return 0 ;
}
