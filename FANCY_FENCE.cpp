//FANCY FENCE

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	double a;//edge case heptagon interior angle = 128.57
	
	while(t--)
	{
		cin>>a;
		bool flag = false;
		for(double n=3 ; n<=360 ; n++)//from triangle to pentacontagon to ...
		//checking if a is the regular interior angle of any 
		//regular polygon or not
		//searched and found interior angle shift and go near 180 but
		//never reach 180 and last is 179 degree where n(no. of side) is 360
		{
			if(((n - 2)*180.0)/n == a)
			{
				flag = true;
				break;
			}
		}
		flag ? cout<<"YES\n" : cout<<"NO\n";
	}
}
