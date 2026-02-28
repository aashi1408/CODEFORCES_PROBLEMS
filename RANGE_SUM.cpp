//RANGE_SUM

#include<iostream>
using namespace std;

//using a loop to do the summation is not a good idea at all
//not so good time complexity increases

int main()
{
	int T;//number of ranges we gonna input
	cin>>T;
	
	for(int i=1 ; i<=T ;i++)
	{
		long long L, R;//(L,R) is a inclusive range
		cin>>L>>R;	
		if(L > R) swap(L,R);//MISTAKE : 
		//they never said that L can't be bigger than R or L<=R it can!
		long long sum = 0;
		long long n = (R-L)+1;
		
		sum = (n*(L+R))/2;
		cout<<sum<<"\n";
	}
	return 0;
}
