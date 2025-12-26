//DIVISIBLE

#include<iostream>
using namespace std;

int main()
{
	string s;
	int x;
	cin>>s>>x;
	
	long long mod = 0;//taking mod as 0 (further we will use it as 0*10 + 1 like we did with rev)
	
	for(char d : s)
	{
//		int digit = d - '0';//converting char to int//WA4
		mod = (mod*10+(d-'0'))%x;
		/* multiply previous value by 10 
		add the new digit
		Reduce using %x to keep it SMALL*/
	}
	mod == 0 ? cout<<"YES" : cout<<"NO";
	
	return 0;
}
