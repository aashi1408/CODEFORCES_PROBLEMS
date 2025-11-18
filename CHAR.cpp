//CHAR

#include<iostream>
using namespace std;

int main()
{
	char U;
	cin>>U;
	int M = U;
	
	if(M>=65 && M<=90)
		 cout<<(char)(32+M);//converts uppercase char to lowercase
		 
	else if(M>=97 && M<=122) 
		cout<<(char)(M-32);//converts lowercase char to uppercase
		
	return 0;
}
