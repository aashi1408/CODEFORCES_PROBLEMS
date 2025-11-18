//GCD OR HCF

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int A,B;//printing GCD
	cin>>A>>B;
	
	int X = min(A,B);
	//to find GCD we just have to iterate from the min of A and B till 1
	
	for(int i=X ; i>=1; i--)
	{
		if(A%i==0 && B%i==0)
		{
		cout<<i;//printing the GCD
		break;
		}
	}
	return 0;
}
