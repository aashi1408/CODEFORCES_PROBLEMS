//AVERAGE

#include<iostream>
#include<iomanip>
using namespace std;

void double_avg(int N)
{
	double x;
	double sum;
	double avg;
	for(int i=1; i<=N; i++)
	{
		cin>>x;
		sum+=x;
	}
	avg = sum/N;
	cout<<fixed<<setprecision(6)<<avg;	
}
int main()
{
	int N;
	cin>>N;
	
	double_avg(N);
	return 0;

}
