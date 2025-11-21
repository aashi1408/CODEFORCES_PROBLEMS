//LUCKY_NUMBERS_4_AND_7

//The Lucky number is any positive number that its decimal representation contains only 4 and 7.

#include<iostream>
using namespace std;

bool Lucky_num(int n,bool& flag)
{
	int temp = n;
	while(temp>0){
		int ld = temp%10;
		if(ld!=4 && ld!=7) return false ;
		temp/=10;
	}
	if (temp == 0) flag = true;
	return true;
}
int main()
{
	int a,b;
	cin>>a>>b;
	
	bool flag = false;
	
	for(int k=a ; k<=b ; k++)
	{

		if(Lucky_num(k,flag))
		{
			cout<<k<<" ";//printing all lucky numbers from a to b
			
		}

	}
	if (flag == false)cout<<-1;
	return 0;
}
































