//COMBINATION AND PERMUTATION

#include<iostream>
using namespace std;

long long fact(int n)
{
	long long factorial = 1;
	for(int i=1 ; i<=n ; i++)
	{
		factorial*=i;
	}
	return factorial;
}

int main()
{
	int A,B;
	cin>>A>>B;
	
	long long a = fact(A);
	long long b = fact(B);
	long long c = fact(A-B);
	//formulas to find permutation and combination
	
	cout<<a/(b*c);//formula to find combination
	cout<<" ";
	cout<<a/c;//formula to find permutation
	
	return 0;
}
