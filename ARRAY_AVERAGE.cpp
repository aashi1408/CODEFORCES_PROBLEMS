//ARRAY_AVERAGE

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int N;
	cin>>N;
//	int a[N];
	
	long double sum = 0;
	double x;
	for(int g=0 ; g<N ; g++)
	{
		cin>>x;
		sum+=x;
		
	}
	
	cout<<fixed<<setprecision(6)<<sum/N;
	return 0;
}
