//DATA_TYPE_GUESSING

#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int main()
{
	long double n,k,a;
	cin>>n>>k>>a;
	long double d = (n*k)/a;
	
	if(fmod(d,1)!=0) cout<<"double";
	
	else if(d>INT_MAX || d<INT_MIN) cout<<"long long";
	
	else cout<<"int";
	
//	cout<<"\n"<<d<<"\n"<<INT_MIN <<"\n"<<INT_MAX;
}
