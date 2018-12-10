#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;
class time
{
	private:
		int hour,min,sec;
	public:
		time();
		time(int h,int m,int s);
		void disTime();
		void ini();
		void sumTime(time x,time y);
};

#endif
