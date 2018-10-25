#include <iostream>
using namespace std;

typedef struct 
{
	int a=0;
	int b=0;
}fraction;

fraction miniFrac(fraction x)
{
	fraction result;
	int tu=x.a,mau=x.b;
	if(tu<0&&mau>0)
		tu=-tu;
	else if(tu>0&&mau<0)
		mau=-mau;
	else if(tu<0&&mau<0)
	{
		tu=-tu;
		mau=-mau;
	}
	while(tu!=mau)
	{
		if (tu>mau)
			tu-=mau;
		else
			mau-=tu;
	}
	result.a=x.a/tu;
	result.b=x.b/mau;
	if(result.a>0&&result.b<0)
	{
		result.b=-result.b;
		result.a=-result.a;
	}
	else if(result.a<0&&result.b<0)
	{
		result.a=-result.a;
		result.b=-result.b;
	}
	return result;
}

void displayFrac(fraction x)
{
	cout<<x.a<<"/"<<x.b<<endl;
}

fraction sumFrac(fraction x,fraction y)
{
	fraction result;
	result.a=x.a*y.b+x.b*y.a;
	result.b=x.b*y.b;
	return miniFrac(result);
}

fraction subFrac(fraction x,fraction y)
{
	fraction result;
	result.a=x.a*y.b-x.b*y.a;
	result.b=x.b*y.b;
	return miniFrac(result);
}

fraction mulFrac(fraction x,fraction y)
{
	fraction result;
	result.a=x.a*y.a;
	result.b=x.b*y.b;
	return miniFrac(result);
}

fraction divFrac(fraction x,fraction y)
{
	fraction result;
	result.a=x.a*y.b;
	result.b=x.b*y.a;
	return miniFrac(result);
}

fraction calculate(fraction x,fraction y, char op)
{
	switch (op)
	{
		case '+':
			return sumFrac(x,y);
		case '-':
			return subFrac(x,y);
		case '*':
			return mulFrac(x,y);
		case '/':
			return divFrac(x,y);
		default:
			{
				cout<<"Nhap lieu sai"<<endl;
				break;
			}
	}
}

int main()
{
	fraction x,y;
	char op;
	char more='y';
	bool conti=true;
	while(conti)
	{
		cout<<"Nhap so hang 1 tu,mau, toan tu, so hang 2 tu,mau:"<<endl;
			cin>>x.a>>x.b>>op>>y.a>>y.b;
		while(x.b==0||y.b==0)
		{
			cout<<"Nhap lai so hang 1 tu,mau, toan tu, so hang 2 tu,mau:"<<endl;
			cin>>x.a>>x.b>>op>>y.a>>y.b;
			if(x.b==0||y.b==0)
				cout<<"Nhap mau lon hon 0"<<endl;
		}
		cout<<"Ket qua la: ";
		displayFrac(calculate(x,y,op));
		cout<<endl;
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
