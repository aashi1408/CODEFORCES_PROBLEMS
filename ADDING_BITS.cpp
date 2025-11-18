//ADDING_BITS

#include<iostream>
using namespace std;

int main()
{
	unsigned int a,b;
	cin>>a>>b;
	
	int sum = a^b;//XOR(^) gives the sum without carry
	cout<<sum;

	return 0;
}
