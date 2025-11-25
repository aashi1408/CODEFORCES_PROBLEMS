//PALINDROME

#include<iostream>
using namespace std;

int main()
{
	int F;//number of elements in the arr
	cin>>F;
	
	int arr[F];
	int cd ;//variable to input array elements
	
	for(int ik=0 ; ik<F ; ik++)
	{
		cin>>cd;
		arr[ik] = cd;
//		cout<<arr[ik]<<" ";
	}
	int brr[F];
	int f = F-1;
	
	for(int im=0 ; im<F ; im++)//stores elements of arr in brr in reverse order
	{
		brr[im] = arr[f];
		f--;
//		cout<<brr[im]<<" "; prints reverse
	}
	
	bool here = true;//true that arr is brr
	for(int i=0 ; i<F ;i++)
	{
		if(arr[i]!=brr[i])
		{
		here = false;
		break;//no need to search further
		}
	}
	if (here) cout<<"YES";
	else cout<<"NO";
	
}











