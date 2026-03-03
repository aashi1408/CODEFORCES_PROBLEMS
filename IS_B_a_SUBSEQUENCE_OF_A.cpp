//IS B a SUBSEQUENCE OF A?

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N,M;
	cin>>N>>M;
	vector<int> a(N) , b(M);
	
	for(int i=0 ; i<N ; i++)	
		cin>>a[i];
	for(int j=0 ; j<M ; j++)
		cin>>b[j];
		
	int i = 0 ,j = 0 ;
	while(i != N and j != M)//<-- and not or!!!
	{
		if(a[i] == b[j])
		{
			i++; j++;//j har case me badhega
		}
		else//a[i] != b[j]
			i++;//i sirf tb badhega jb a[i] == b[j]
	}
	if(j == M) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
