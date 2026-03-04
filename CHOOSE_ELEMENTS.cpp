//CHOOSE ELEMENTS

#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
//	You ignored one word in the problem statement — "at most".
//there can be -ve numbers as well
//at most not k only
	int arr[1000];
	for(int i=0 ; i<n ; i++)
		cin>>arr[i];
		
	//insertion sort
	for(int i=1 ; i<n ; i++)
	{
//		bool swapped = false;
		for(int j=i ; j>0 ; j--)//j>0 not j>=0
		{
			if(arr[j] > arr[j-1])
			{
				swap(arr[j], arr[j-1]);
			}
			else break;
		}
	}
	//perform prefix sum
	long long sum = 0 ;
	for(int i=0 ; i<k ; i++)
	{
		if(arr[i] < 0) break;
		sum += arr[i];	
	}
	cout<<sum;

//	for(int i=0 ; i<n ; i++) cout<<arr[i]<<" ";
	
}
