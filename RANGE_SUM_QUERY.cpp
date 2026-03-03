//RANGE SUM QUERY

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N,Q;
	cin>>N>>Q;
	vector<long long> prefix(N);
	
	for(int k=0 ; k<N ; k++)
	{
		cin>>prefix[k];
		if(k>0) prefix[k] += prefix[k - 1];
	}
	while(Q--)
	{
		int L,R;
		cin>>L>>R;
		
		long long sum = prefix[R-1];
		if(L>1) 
			sum -= prefix[L-2];
		cout<<sum<<endl;
	}
	return 0;
}
