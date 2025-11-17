//MULTIPLICATION_TABLE

#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int B;
	cin>>B;
	for(int o=1;o<=12;o++)
	{
		cout<<B<<" * "<<o<<" = "<<B*o<<endl;//table of B from 1 to 12
		//C++ style formatting
	}
//	for(int k=1;k<=12;k++)
//	{
//		printf("%d * %d = %d\n",B,k,B*k)endl;	
//	//C style formatting
//	}
	return 0;
}
