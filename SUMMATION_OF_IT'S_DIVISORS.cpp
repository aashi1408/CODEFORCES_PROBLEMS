//SUMMATION OF IT'S DIVISORS

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long N, sum = 0;
	cin>>N;
	long long limit = sqrt(N);
	for(int i=1 ; i<=limit ; i++)
	{
		if(N % i == 0)
		{
			long long d1 = i;
			long long d2 = N/i;
			
			sum += d1;
			if(d1!=d2) sum += d2;
		}
		//TLE will happen if we run a normal loop so made a 
		//loop to find pairs
	}
	cout<<sum;
}
