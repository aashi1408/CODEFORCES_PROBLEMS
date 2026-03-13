//DICE TOWER

#include<iostream>
using namespace std;

int main()
{
	int n;cin>>n;
	int top,bottom;
	cin>>top;
	bottom = 7 - top ;
	
	int left , right;
	bool flag = true;//can uniquely identify the numbers on the
	//faces of all the dice in the tower.
	while(n--)
	{
		cin>>left>>right;
		if((7 - left == bottom or 7 - left == top) or
		(7 - right == bottom or 7 - right == top) )
		{
			flag = false;
		}
		//expected that top remains the same ?
	}
	if(flag) cout<<"YES";
	else cout<<"NO";
	
	return 0;
	
}
