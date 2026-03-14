//PANGRAM

#include<iostream>
using namespace std;

int main()
{
	int n;cin>>n;
	string s;cin>>s;
	int n1 , n2;
	n1 = n2 = n;
	int i= 0;
	while(n1--)//if upper then to lower
	{
		if(s[i] >= 65 and s[i] <= 90)
		{
			s[i] += 32;
		}
		i++;
	}
	int freq[123] = {0} ;
	for(int j=0 ; j<n ; j++)//counting freq of the letter
	{
		freq[s[j]] ++;
	}
	//one loop to check
	for(int j=122 ; j>=97 ; j--)
	{
		if(freq[j] == 0) 
		{
			cout<<"NO";
			return 0;
		}	
	}
	cout<<"YES";
	return 0;
}











