//BREAK NUMBER

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;cin>>N;
	int mx = 0 ;
//	we need to store array at all!!
	for(int i=1 ; i<=N ; i++)
	{
		long long x ; cin>>x ; 
		int cnt = 0 ;
		
		if(x % 2 == 0)
		{
			while(x % 2 == 0)
			{
				cnt ++;
				x /= 2 ;
			}

		}
		mx = max(cnt , mx) ;
	}
	cout<<mx;
	return 0;
//	cout<<log2(14);
}
