//LUCKY_NUMBERS

#include<iostream>
using namespace std;

int main()
{
	int H;
	cin>>H;
	int ld1 = H%10;
	H/=10;
	int ld2 = H%10;
	
	if( ld1%ld2==0 || ld2%ld1==0 ) cout<<"YES";
	
	else cout<<"NO";
}
