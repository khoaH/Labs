#include <iostream>
#include "serial.h"
using namespace std;

int main()
{
	serial::num=0;
	serial nv1,nv2,nv3;
	nv1.serialNum();
	nv2.serialNum();
	nv3.serialNum();
	nv1.disSerial();
	nv1.disSerial();
	nv1.disSerial();
	return 0;
}
