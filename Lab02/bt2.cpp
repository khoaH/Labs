#include <iostream>
using namespace std;

float calMoney(float amount,float interestRate,int year)
{
	float earn=amount;
	for(int i=1;i<=year;i++)
		earn*=1+(interestRate/100);
	return earn;
}

int main()
{
	float amount,interestRate;
	int year;
	cout<<"Nhap so tien, lai suat(% nam), so nam gui:"<<endl;
	cin>>amount>>interestRate>>year;
	cout<<"So tien ban nhan duoc la: "<<calMoney(amount,interestRate,year);
	return 0;
}
