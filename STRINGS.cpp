//STRINGS

#include<iostream>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	
	cout<<s1.length()<<" "<<s2.length()<<"\n";//prints lengths of s1 and s2;
	
	string str = s1;
	str+=s2;//Concetenating strings
	cout<<str<<"\n";
	
	string s_1,s_2;
	s_1 = s1;
	s_2 = s2;
	for(int k=0 ; k<1 ; k++)
	{
		s_1[0] = s2[0];
		s_2[0] = s1[0];
	}
	cout<<s_1<<" "<<s_2;
	
	return 0;
}
