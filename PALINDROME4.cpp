//PALINDROME

#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	string ss;
	int j = s.length()-1;
	for(int i=0 ; i<s.length() ; i++)
	{
		ss[i] = s[j];
		j--;
	}
	cout<<ss;
	if(s == ss) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
