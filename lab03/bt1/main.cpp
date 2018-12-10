#include <iostream>
#include "time.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	time t1,t2,t3;
	t1.ini();
	t2.ini();
	t3.sumTime(t1,t2);
	cout<<"3 tgian can tim:"<<endl;
	t1.disTime();
	t2.disTime();
	t3.disTime();
	return 0;
}
