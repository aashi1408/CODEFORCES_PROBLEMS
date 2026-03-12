//DUBSTEP

#include<iostream>
using namespace std;

int main()
{
	string dub_song;
	cin>>dub_song;
	
	string song = "";
	
	bool filled = false;
	//i have used this variable as space " " will
//	 only generate when there is a word not at the begining
//one imp case to look upon is if there are two WUB then two " "
//will be generated which we don't want so we'll use filled and
//will play with it to make sure no two spaces get together unnecessarily!

	int i=0;
	while(i != dub_song.length())
	{
//		if(i <= dub_song.length() - 3)
//		{
			if(dub_song[i] == 'W' and dub_song[i+1] == 'U'
		 	and dub_song[i+2] == 'B')
			{
			i += 3;
			if(filled) 
			{
				song += " ";
				filled = false;	
			}
			}
//		}
		else
		{
			song += dub_song[i];
			filled = true;
			i++ ;
		}
	}
	cout<<song;
	return 0;
}
