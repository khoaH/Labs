#include <iostream>
#include "mycodeHoaDon.h"
#include <fstream>

using namespace std;

int main()
{
	int a;
	HoaDon hd;
	ListHoaDon l;
	Create_ListHoaDon(l);
	if(l.First != NULL || l.Last != NULL)
		cout << "sai";
	ifstream f("HOADON.txt");
	if(f.fail())
	{
		cout << "Deo duoc";
	}
	else 
	{
		cout << "Duoc";
	}
	/*C:\\Users\\legen\\Desktop\\*/
	while(!f.eof())
	{
		f >> hd.SoHoaDon;
		f >> hd.NgayNhapHoaDon.date;
		f >> hd.NgayNhapHoaDon.month;
		f >> hd.NgayNhapHoaDon.year;
		f >> hd.Loai;
		cout << "OK ";
 		InsertLast(l, hd);
 		cout << "OK1 ";
	}
	do
	{
		//system ("cls");
		cout << "\n\n\t\t =========== MENU ===========";
		cout << "\n1. In danh sach.";
		cout << "\n2. Them dau.";
		cout << "\n3. Them cuoi.";
		cout << "\n4. Xoa dau.";
		cout << "\n5. Xoa cuoi.";
		cout << "\n0. Thoat.";
		cout << "\n\n\t\t =========== END ===========";
		cout << "\nChon chuc nang: ";
		cin >> a;
		switch(a)
		{
			case 1:
				{
					OutputConsole(l);
					break;
				}
			case 2:
				{
					InsertFirst(l, hd);
					break;
				}
			case 3:
				{
					InsertLast(l, hd);
					break;
				}
			case 4:
				{
					DeleteFirst(l);
					break;
				}
			case 5: 
				{
					DeleteLast(l);
					break;
				}
		}
	}while(a != 0);
	return 0;
}

