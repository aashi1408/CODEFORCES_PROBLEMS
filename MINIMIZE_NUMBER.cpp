//MINIMIZE NUMBER

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;
	cin>>N;
	int arr[200];
	for(int i=0 ; i<N ; i++)
	{
		cin>>arr[i];
	}
	//check if any ele is odd?
//	for(int j=0 ; j<N ; j++)
//	{
//		if(fmod(arr[j] , 2) != 0)
//		{
//			cout<<0;
//			return 0;
//		}
//	}
	int max_op = 0;
	bool flag = true;//
	while(flag)
	{
		for(int i=0 ; i<N ;i++)
		{
			if((arr[i]) % 2 != 0 )
			{
				flag = false;
				break;
			}
			else
			{
//				flag = true;
				arr[i] /= 2;
			}
		}
		if(flag) max_op ++;
		else break;
	}
	cout<<max_op;
}


















