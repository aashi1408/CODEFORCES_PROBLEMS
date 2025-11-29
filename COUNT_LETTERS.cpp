//COUNT_LETTERS

#include<iostream>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	
	int vis[256] = {0};//size is 256 as all possible characters fit in.
	//vis checks whether we counted that letter or not if counted continue
	int freq[256] = {0};//freq helps in printing letters alphabetically
	//freq stores count
	
	for(int i=0 ; i<s.length() ; i++)
	{
		if(s[i]==' ') continue;
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
		freq[s[i]] = count;
//		cout<<s[i]<<" : "<<count<<"\n";
	}
	for(char c='a' ; c<='z' ; c++)
		{
			if(freq[c]>0)
			{
				cout<<c<<" : "<<freq[c]<<"\n";
			}
		}
	return 0;
}
