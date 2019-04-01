#ifndef SERIAL_H
#define SERIAL_H
#include <iostream>
using namespace std;
/*
 * No description
 */
class serial
{
	// private section
	private:
		int ser;
	public:
		static int num;
		void serialNum();
		void disSerial();
};

#endif // SERIAL_H

