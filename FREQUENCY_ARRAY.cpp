//FREQUENCY ARRAY

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N,M;
	cin>>N>>M;
//	vector<int> arr(N);//no need 
//do we really need this? no (arr)
	vector<int> freq(M+1,0);
	
	int x;
	for(int i=0 ; i<N ; i++)
	{
		cin>>x;
		freq[x] ++;
	}
	for(int i=1 ; i<=M ; i++)
	{
//		if(freq[i] != 0)
			cout<<freq[i]<<"\n";
	}
	return 0;
}
