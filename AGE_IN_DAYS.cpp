//AGE_IN_DAYS

#include<iostream>
using namespace std;

int main()
{
	int year_;
	cin>>year_;
	int years = year_/365;
	int rem = year_%365;
	int mons = (year_%365)/30;
	int days = (year_%365)%30;
	cout<<years<<" years\n";
	cout<<mons<<" months\n";
	cout<<days<<" days";
	return 0;
}
