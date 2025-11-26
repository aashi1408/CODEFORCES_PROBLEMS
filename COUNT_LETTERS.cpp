//COUNT_LETTERS

#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int vis[256] = {0};//size is 256 as all possible characters fit in.
	
	for(int i=0 ; i<s.length() ; i++)
	{
		if(vis[s[i]]==1) continue;
		
		int count = 0;
		for(int d=0 ; d<s.length() ; d++)
		{
			if (s[i] == s[d])
			{
				++count;
			}
		}
		vis[s[i]] = 1;
			cout<<s[i]<<" : "<<count<<"\n";
	}
	return 0;
}
