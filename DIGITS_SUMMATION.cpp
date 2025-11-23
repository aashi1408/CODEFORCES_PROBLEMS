//DIGITS_SUMMATION
#include<iostream>
using namespace std;

int main()
{
	long long n1,n2;
	cin>>n1>>n2;
	int ld1,ld2;
	ld1 = n1%10;
	ld2 = n2%10;
	cout<<ld1+ld2;
	return 0;
}
