#include<iostream>

using namespace std;
void check(int hour,int minute);


main()
{
int hour,minute;
cout<<"Enter Hour: ";
cin>> hour;
cout<<"Enter Minutes: ";
cin>> minute;
check(hour,minute);


}
void check(int hour,int minute)
{ int a = 0;
	if(hour < 24)
{
	if(minute <= 44)		
	{
	minute = minute + 15; 
	}
	if(minute == 45)
	{
	minute = 0;
	minute = minute + 15; 
	}
	if(minute > 45)
	{
		while(minute < 60)
	{
	
	minute = minute + 1;
	a = a + 1;
	}
	a = 15 - a;
	minute = a;
	hour = hour + 1;
	
	}


	}

	if(hour > 24)
{
	cout<<"Error";
}
	if(hour == 24)
{
	hour = 0;
	if(minute <= 44)		
	{
	minute = minute + 15; 
	}
	if(minute == 45)
	{
	minute = 0;
	minute = minute + 15; 
	}
	if(minute > 45)
	{
		while(minute < 60)
	{
	
	minute = minute + 1;
	a = a + 1;
	}
	a = 15 - a;
	minute = a;
	}

}
cout<<"Hours: "<<hour;
cout<<" Minute: "<<minute;
}
