//SUFFIX_SUM

#include<iostream>
#include<vector>
using namespace std;

long long M_sum(long long arr[],long long index,long long m)
{
	if (m==0) return 0;
	return arr[index]+M_sum(arr,index+1,m-1);
}

int main()
{
	long long N,M;
	cin>>N>>M;
	long long a[N];
	for(int s=0 ; s<N; s++)
	{
		long long x;
		cin>>x;
		a[s] = x;
	}
	cout<<M_sum(a,N-M,M);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
//int main()
//{
//	int N,M;
//	cin>>N>>M;
//	int x;
//	vector<long long> a(N);
//	for(int i=0 ; i<N ; i++)
//	{
//		cin>>x;
//		a[i] = x;
//	}
//	if(M>N) 
//	{
//		cout<<0;
//		return 0;
//	}
//	long long sum = 0;
//	for(int j=N-1 ; j>=M-1 ; j--)
//	{
//		sum+=a[j];
//	}
//	cout<<sum;
//	return 0;
//}
