//CHECK CODE

#include<iostream>
using namespace std;

int main()
{
	int A,B;
	cin>>A>>B;
	string s;
	cin>>s;
	bool fla = false;
	if(s[A] == '-') fla = true;
	
	for(int i=0 ; i<s.length() ; i++)
	{
		if(i == A) continue;
		if(s[i] >= '0' and s[i] <= '9')
			continue;
		else fla = false;
	}
	if(fla) cout<<"Yes";
	else cout<<"No";
}
