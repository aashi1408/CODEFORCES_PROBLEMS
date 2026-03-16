//CASE OF THE ZEROES AND ONES

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;cin>>s;
	
	int cnt1 = 0 , cnt0 = 0;
	
	for(int i=0 ; i<n ; i++)
	//CALCULATE 1 AND 0 CNT
	{
		if(s[i] == '1') cnt1 ++;
		else ++ cnt0 ;
	}
	int pair = min(cnt1 , cnt0);//MIN POSSIBLE PAIRS OF 0 AND 1
	
	cout<<n - 2*pair ;
	
	return 0;
}
