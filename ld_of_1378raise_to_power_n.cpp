//ARPA'S_HARD_EXAM_AND_MEHRDAD'S_NAIVE_CHEAT

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	/* we have given a  digit n
	and we have to find the last digit of the value of  1378 raise to 
	the power n
	I have calculated and dry run the 4 possible last digits
	by tracing the table of the last digit of 1378 which is 8 */
	
	//one edge case that i missed was 1378^0 in this 6 will get printed which is wrong !/?//
	//edge case:
	if(n == 0)
	{
		cout<<1;
		return 0;
	}	
	if(n % 4 == 0) cout<<"6";
	else if(n % 4 == 1) cout<<"8";
	else if(n % 4 == 2) cout<<"4";
	else if(n % 4 == 3) cout<<"2";
	
	return 0;
	
}
