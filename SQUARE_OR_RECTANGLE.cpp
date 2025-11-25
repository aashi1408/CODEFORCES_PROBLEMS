//SQUARE_OR_RECTANGLE

#include<iostream>
using namespace std;

int main()
{
	int T;//number of tests
	cin>>T;
	int w,h;
	
	for(int isd=1 ; isd<=T ; isd++)
	{
		cin>>w>>h;
		if(w==h) cout<<"Square\n";
		else cout<<"Rectangle\n";
	}
	return 0;
}
