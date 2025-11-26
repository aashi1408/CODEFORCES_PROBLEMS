//SEARCHING

#include<iostream>
using namespace std;

int main()
{
	int N;//size of array
	cin>>N;
	int arr[N];
	int x,X,index ;//= 0;
	bool det = false;//determiner determines whether X in arr or not
	
	for(int d=0 ; d<N ; d++)
	{
		cin>>x;
		arr[d] = x;
	}
	cin>>X;
	
	for(int u=0 ; u<N ; u++)
	{
		if (arr[u]==X)
		{
			index = u;
			det = true;
			break;
		}
	}
	if (det==false) cout<<-1;
	else cout<<index;
	
	return 0;
}
