//GOOD_OR_BAD

#include<iostream>
using namespace std;

int main()
{
	int T;//no. of tests
	cin>>T;
	
	string x;//GOOD if substring is 010 or 101

	for(int i=1 ; i<=T ; i++)//i is just a counting of tests
	{
		cin>>x;//inputing the string
		bool flag = false;//assuming that string is Bad

		for(int j=0 ; j<x.length()-2 ; j++)
		{
			if((x[j]=='0' && x[j+1]=='1' && x[j+2]=='0')||
			(x[j]=='1' && x[j+1]=='0' && x[j+2]=='1'))
			{
				flag = true;
			}
			else
			{
			 flag = false;
			 break;
			}
	
		}
		if (flag == true) cout<<"Good\n";
		else cout<<"Bad\n";

	}
	return 0;
}
