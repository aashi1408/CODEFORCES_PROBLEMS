//COORDINATES_OF_A_POINT

#include<iostream>
using namespace std;

int main()
{
	float b,a;
	cin>>b>>a;
	if (b==0 && a==0) cout<<"Origem";
	
	else if (b>0 && a>0) cout<<"Q1";
	
	else if (b<0 && a>0) cout<<"Q2";
	
	else if (b<0 && a<0) cout<<"Q3";
	
	else if (b>0 && a<0) cout<<"Q4";
	
	else if (a==0) cout<<"Eixo X";
	
	else if (b==0) cout<<"Eixo Y";
	
	return 0;
}
