//WAY_TO_LONG_WORDS

#include<iostream>
using namespace std;

int main()
{
	int T;//No. of tests
	cin>>T;
	
	string s;
	for(int i=1 ; i<=T ; i++)//i is just the count T
	{
		cin>>s;
		if(s.length()<=10) cout<<s<<"\n";
		
		else
		{
			cout<<s[0];//PRINTS first letter of string
			cout<<s.length()-2;//no. of letters between first and last letter
			cout<<s[s.length()-1];//prints last letter
			cout<<"\n";
		}
	}
	return 0;
}
