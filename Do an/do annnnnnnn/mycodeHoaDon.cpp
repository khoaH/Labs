//1.	KiemTraRong
//2.	ThemVaoCuoiDanhSach
//3.	XoaNodeDauDanhSach
//4.	XoaSauNode
//5.	TimKiemInfo
//6.	XoaNode_info
//7.	DemSoHoaDon
//8.	TimKiemHoaDon
//9.	TimKiemViTriHoaDon
//10.	TimKiemHoaDonThuN
//11.	TenDayDuCuaNhanVien
//12.	DemSoHoaDonTrongKhoangThoiGian
//13.	TraVeMangHoaDon
#include <iostream>
#include "mycodeHoaDon.h"
#include "CauTrucDuLieu.h"

using namespace std;

void Create_ListHoaDon(ListHoaDon &l)
{
	l.First = NULL;
	l.Last = NULL;
}

bool Empty(ListHoaDon l)
{
	if(l.First == NULL)
		return true;
	return false;
}

void InsertFirst(ListHoaDon &l, HoaDon hd)
{
	PTRHoaDon p = new NodesHoaDon;
	if(p == NULL) 
	{
		cout << "Bo nho cua ban da het. Khong them duoc phan tu.";
		return;
	}
	p -> InfoHoaDon = hd;
	p -> next = NULL;
	if(Empty(l))
	{
		l.First = l.Last = p;
		//cout <<"TTT ";
	}
	else 
	{
		p -> next = l.First;
		l.First = p;
		cout <<"TTT ";
	}
	
}

void InsertLast(ListHoaDon &l, HoaDon hd)
{
	PTRHoaDon p = new NodesHoaDon;
	if(p == NULL) 
	{
		cout << "Bo nho cua ban da het. Khong them duoc phan tu.";
		return;
	}
	p -> InfoHoaDon = hd;
	p -> next = NULL;
	if(Empty(l))
	{
		l.First = l.Last = p;
	}
	else 
	{
		l.Last -> next = p;
		l.Last = p;
	}
}

void DeleteFirst(ListHoaDon &l)
{
	if(Empty(l))
	{
		cout << "Khong co phan tu de xoa.";
		return;
	}
//	if(l.First == l.Last)
//	{
//		l.First = l.Last = NULL;
//	}
//  Ko can vi truong hop 1 phan tu vs nhieu phan tu thi giai quyet giong nhau
	PTRHoaDon p = l.First;
	l.First = l.First -> next;
	delete p;
}

void DeleteLast(ListHoaDon &l)
{
	if(Empty(l)) 
	{
		cout << "Khong co phan tu de xoa.";
		return;
	}
	if(l.First == l.Last) //danh sach chi 1 phan tu
	{
		l.First = l.Last = NULL;
	}
	PTRHoaDon p = l.First;
	for(PTRHoaDon i = l.First; i != NULL; i = i -> next)
	{
		if(i -> next == l.Last)
		{
			delete l.Last;
			i -> next = NULL;
			l.Last = i;
		}
	}
}

void OutputConsole(ListHoaDon &l)
{
	for(PTRHoaDon i = l.First; i != NULL; i = i -> next)
	{
		cout << i -> InfoHoaDon.SoHoaDon <<"\n";
		cout << i -> InfoHoaDon.NgayNhapHoaDon.date <<"\n";
		cout << i -> InfoHoaDon.NgayNhapHoaDon.month <<"\n";
		cout << i -> InfoHoaDon.NgayNhapHoaDon.year <<"\n";
		cout << i -> InfoHoaDon.Loai <<"\n";
	}
}
