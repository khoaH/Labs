#include <iostream>
#include <string.h>
using namespace std;

typedef struct 
{
	char areaCode[3];
	char exCode[3];
	char num[8];
}phone;

void initPhone(phone &urNum)
{
	cout<<"Hay nhap ma quoc gia, ma nha mang, ma dien thoai:"<<endl;
	cin>>urNum.areaCode>>urNum.exCode>>urNum.num;
}

void displayNum(phone &urNum)
{
	cout<<"+"<<urNum.areaCode<<" "<<urNum.exCode<<"-"<<urNum.num<<endl;
}

int main()
{
	phone myNum,urNum;
	strcpy(myNum.areaCode,"84");
	strcpy(myNum.exCode,"92");
	strcpy(myNum.num,"8679518");
	initPhone(urNum);
	cout<<"My number is ";
	displayNum(myNum);
	cout<<"Your number is ";
	displayNum(urNum);
	return 0;
}
