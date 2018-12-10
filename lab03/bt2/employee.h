#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;
/*
 * No description
 */
class employee
{
	// private section
	private:
		int id;
		float compensation();
		int seniority;
	public:
		void ini();
		void display();
};

#endif // EMPLOYEE_H

