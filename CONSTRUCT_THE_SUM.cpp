//CONTRUST THE SUM

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		long long s;
		cin>>n>>s;
		long long total = n * (n + 1LL) / 2LL;//no overflow //
		if(total < s)
		{
			cout<< -1<<endl;
			continue;//imp hai!!//
		}
		
		else//n < s now all cases
		{
			long long remaining = s;
			for(int i=n ; i>=1 ; i--)
			{
				if(i <= remaining)//
				{
					cout<<i<<" ";
					remaining -= i;
				}
			}
			cout<<"\n";
		}
	}
}











































