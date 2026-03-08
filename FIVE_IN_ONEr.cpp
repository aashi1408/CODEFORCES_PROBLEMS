//FIVE_IN_ONE

#include<iostream>
#include<cmath>
using namespace std;

int arr_max(int arr[] , int n)
{
	int mx = 0;
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i] > mx) mx = arr[i];
	}
	return mx;
}
int arr_min(int arr[] , int n)
{
	int mn = 101;
	for(int i=0 ; i<n ; i++)
	{
		if(arr[i] < mn) mn = arr[i];
	}
	return mn;
}
int prime_cnt(int arr[] , int n)
{
	int cnt = 0;
	for(int i=0 ; i<n ; i++)
	{
		int limit = sqrt(arr[i]);
		if(arr[i] == 1) continue;
		if(arr[i] == 2)
		{
			cnt ++;
			continue;
		}
		bool prime = true;
		for(int j=2 ; j<= limit ; j++)
		{
			if(arr[i] % j == 0) prime = false;
		}
		if(prime) cnt ++;
		
	}
	return cnt;
}
int palindrome_cnt(int arr[] , int n)
{
	int cnt = 0;
	for(int i=0 ; i<n ;i++)
	{
		if(arr[i] >= 1 && arr[i] <= 9)
			cnt ++;
		else if(arr[i] % 11 == 0) cnt ++;
	}
	return cnt;
}
int max_div_num(int arr[] ,int n)
{
	int div_freq[101] = {0} ;
	int mx_div = 0;//freq of max divisors found
	
	for(int i=0 ; i<n ; i++)
	{
		int divisors = 0;
		for(int j= arr[i] ; j >= 1 ; j--)
		{
			if(arr[i] % j == 0) divisors ++;
		}
		div_freq[arr[i]] = divisors ;
		mx_div = max(mx_div , divisors);
	}
	for(int i=100 ; i>=1 ; i--)
	{
		if(div_freq[i] == mx_div) return i;
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[100] ; 
	for(int i=0 ; i<n ; i++)
		cin>>arr[i];

	cout<<"The maximum number : "<<arr_max(arr,n)<<"\n";
	cout<<"The minimum number : "<<arr_min(arr,n)<<"\n";
	cout<<"The number of prime numbers : "<<prime_cnt(arr,n)<<"\n";
	cout<<"The number of palindrome numbers : "<<palindrome_cnt(arr,n)<<"\n";
	cout<<"The number that has the maximum number of divisors : "<<max_div_num(arr,n)<<"\n";
	
}

























