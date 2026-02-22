//PRIME FIBONACCI

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int i, long long fibo[])
{
	if(fibo[i] == 0 or fibo[i] == 1 )
		return false;
	else if( fibo[i] == 2)
		return true;//
	else if( fibo[i] % 2 == 0) return false;
	
	int limit = sqrt(fibo[i]);
	for(int j = 3; j <= limit; j+=2)
	{
		if(fibo[i] % j == 0) return false;//not prime
	}
	return true;//prime
}
int main()
{
	int t;
	cin>>t;
	long long fibo[51] = {0};
	bool prime[51] ;
	fibo[1] = 0;
	fibo[2] = 1;
	for(int i=3 ; i<=50 ; i++)
		fibo[i] = fibo[i-1] + fibo[i-2];
	
	for(int i=1 ; i<=50 ; i++)
	{
		prime[i] = isPrime(i,fibo);
	}
		
	int x;
	while(t--)
	{
		cin>>x;
		if(prime[x]) cout<<"prime\n";
		else cout<<"not prime \n";
	}
	return 0;
//	cout<<sizeof(long long);
}
