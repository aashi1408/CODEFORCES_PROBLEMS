//FREE ICE CREAM

#include<iostream>
using namespace std;

int main()
{
	int n;
	long long X;//X--> left ice cream also and initial ice cream
	cin>>n>>X;

	char op;
	long long x;
	int cnt = 0;//child distress
	
	while(n--)
	{
		cin>>op>>x;
		if(op == '+') X += x;
		else if(X - x >= 0) X -= x;
		else cnt++;
	}
	
	cout<<X<<" "<<cnt;
	return 0;
}
