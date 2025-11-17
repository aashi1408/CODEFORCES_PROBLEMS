//WINTER_SALE

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	long double X,DP,AP;//X is the discount you got
	//DP is the discount price
	//AP is the actual price
	cin>>X>>DP;
	
	long double rem_X = 100.0L-X;//remaining X
	
	AP = (DP/rem_X)*100.0L;
	
	cout<<fixed<<setprecision(2)<<AP;
//	cout<<sizeof (long double)<<endl;
	return 0;
}
