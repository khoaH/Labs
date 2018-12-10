#include "time.h"
#include <iostream>
using namespace std;

time::time()
{
	hour=0;
	min=0;
	sec=0;
}

time::time(int h,int m,int s)
{
	int r=s/60;
	sec=s%60;
	min=(r+m)/60;
	r=min%60;
	hour=(r+h)/60;	
}

void time::disTime()
{
	cout<<hour<<":"<<min<<":"<<sec<<endl;
}

void time::ini()
{
	time();
	do
	{
		if(hour>11||min>59||sec>59)
			cout<<"Ban nhap thoi gian sai, can nhap it hon 11:59:59"<<endl;
		cout<<"Nhap thoi gian gio,phut,giay!"<<endl;
		cin>>hour>>min>>sec;
	} while (hour>11||min>59||sec>59);
}

void time::sumTime(time x,time y)
{
	time();
	hour+=x.hour+y.hour;
	min+=x.min+y.min;
	sec+=x.sec+y.sec;
	time(hour,min,sec);
}
