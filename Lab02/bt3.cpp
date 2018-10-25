#include <iostream>
using namespace std;

float sumNum(float n1,float n2)
{
	return n1+n2;
}
float subNum(float n1,float n2)
{
	return n1-n2;
}
float mulNum(float n1,float n2)
{
	return n1*n2;
}
float divNum(float n1,float n2)
{
	return n1/n2;
}
float calculate(float a,float b, char op)
{
	switch (op)
	{
		case '+':
			return sumNum(a,b);
		case '-':
			return subNum(a,b);
		case '*':
			return mulNum(a,b);
		case '/':
			return divNum(a,b);
		default:
			{
				cout<<"Nhap lieu sai"<<endl;
				break;
			}
	}
}

int main()
{
	float a,b;
	char op;
	char more='y';
	bool conti=true;
	while(conti)
	{
		cout<<"Nhap so hang 1, toan tu, so hang 2:"<<endl;
		cin>>a>>op>>b;
		cout<<"Ket qua la: "<<calculate(a,b,op)<<endl;
		cout<<"Tiep tuc? y/n"<<endl;
		cin>>more;
		if (more=='y')
			conti=true;
		else if(more=='n')
			conti=false;
		else
		{
			cout<<"Nhap sai, ket thuc ct"<<endl;
			conti=false;
		}
	}
	return 0;
}
