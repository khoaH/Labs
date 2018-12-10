#include "employee.h" // class's header file
#include <iostream>
using namespace std;

float employee::compensation()
{
	int result=3000;
	for(int i=0;i<seniority;i++)
		result*=1.055;
	return result;
}

void employee::ini()
{
	cout<<"Nhap id, tham nien:"<<endl;
	cin>>id>>seniority;
}

void employee::display()
{
	cout<<"Id: "<<id<<endl;
	cout<<"BHXH: "<<compensation()<<endl;
}
