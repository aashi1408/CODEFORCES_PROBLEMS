//COUNTING ELEMENTS

#include<iostream>
using namespace std;

int main()
{
	int n;cin>>n;
	int freq[1001] = {0};//do we really need to store arr? no! but freq
	int x;
	int mx = INT_MIN;
	for(int i=0 ; i<n ; i++)
	{
		cin>>x;
		freq[x] ++;
		mx = max(mx, x);
	}
	int cnt = 0;//count the number of element ai
// in the array such that ai+1
// is also exists in the array a

	for(int i= mx; i>=0 ; i--)//or i = 1000 also ok
	{
		if(freq[i+1] != 0 and freq[i] != 0)
		{
			cnt += freq[i];
		}
	}
	cout<<cnt;
	return 0;
}
