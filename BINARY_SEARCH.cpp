//BINARY SEARCH

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int N,Q;
	cin>>N>>Q ;
	vector<int> A;
	
	int x;//var to input vector elements
	for(int p=0 ; p<N ; p++)
	{
		cin>>x;
		A.push_back(x);
	}
	
	sort(A.begin(),A.end());

//	for(int i=0 ; i<N ; i++) //prints sorted array
//	{
//		cout<<A[i]<<" ";
//	}
	int key;
	
	for(int i=1 ; i<=Q ; i++)//no. of queries getting found or not found
	{
		cin>>key;
		bool found = false;
		
		int start = 0 , end = N-1 , mid;
		
		while(start<=end)
		{
			mid = (start+end)/2;
			
			if(A[mid]==key)
			{
				cout<<"found"<<"\n";
				found = true;
				break;
			}
			else if(A[mid]>key)
			{
				end = mid -1 ;
			}
			else if(A[mid]<key)
			{
				start = mid + 1;
			}
		}
		if(found == false) cout<<"not found"<<"\n";
		//ternary can also be helpful
		//found? cout<<"found\n" : cout<<"not found\n";
	}
	
	return 0;	
}


























