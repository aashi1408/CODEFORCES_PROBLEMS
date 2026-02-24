//GEORGE AND ACCOMODATION

#include<iostream>
using namespace std;

int main()
{
	int n;//no. of rooms
	cin>>n;
	
	int p,q;
	int free_rooms = 0;
	//considering rooms are not free(initially)
	while(n--)
	{
		cin>>p>>q;
		if(q - p >= 2)
			++free_rooms;
	}
	cout<<free_rooms;
	
	return 0;
}
