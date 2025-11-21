//NEXT_ALPHABET

#include<iostream>
using namespace std;

int main()
{
	string C;
	//using string instead of char
	cin>>C;
	int c = C[0];
	
	if (C[0]=='z') c = C[0]-26;
	
//	cout<<c<<endl;
	C = ++c;
	cout<<C;
	return 0;
}
