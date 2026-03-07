//PRIME FUNCTION

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
	if(n == 1) return false;
	if(n == 2) return true;
	int limit = sqrt(n);
	
	for(int i=2 ; i<=limit ; i++)
	{
		if(n % i == 0) return false;//it's not a prime but a composite
	}
	return true;
}

int main()
{
	int t;cin>>t;
	int x;
	while(t--)
	{
		cin>>x;
		if(isPrime(x)) cout<<"YES\n";
		else cout<<"NO\n";
	}
}
