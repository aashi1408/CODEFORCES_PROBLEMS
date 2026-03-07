//EQUATION

#include<iostream>
using namespace std;

int main()
{
	int X , N;
	cin>>X>>N;
	
	long long result = 0;
//	long long ans = 1;//for 10^10// <-- needs to be inside
	
	for(int i=2 ; i<= N ; i += 2)
	{
		long long ans = 1;
		for(int j=1 ; j <= i ; j++)
		{
			ans *= X; 
		}
		result += ans;
	}
	cout<<result ;
}
