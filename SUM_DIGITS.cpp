//SUM_DIGITS

#include<iostream>
using namespace std;

int main()
{
	int N;
	cin>>N;
	string A;
	cin>>A;//input a number of N digits
	//qs said 10^6 digits!!!!not 5 or 6
	long long sum = 0;
	for(char c:A)
	{
		sum += c - '0';
	}
	cout<<sum;
	
	return 0;
}
