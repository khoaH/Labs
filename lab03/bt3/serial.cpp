#include "serial.h" // class's header file
#include <iostream>
using namespace std;
/*int serial::ser()
{
	return serialnum();
}*/
void serial::serialNum()
{
	ser=num;
	num++;
}

void serial::disSerial()
{
	cout<<"Serial cua object la: "<<ser<<endl;
}

