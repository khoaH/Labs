#include "StructChinh.cpp"
#include <iostream>
#include <fstream>
using namespace std;
//1.IsEmpty
//2.IsFull
//3.Search
//4.Tim kiem vi tri thich hop theo <ho> + <ten>
//5.Them nut vao vi tri X
//6.Them nhan vien sap xep theo ten
//7.Xoa nut theo vi tri
//8.DOC FILE***
//9.GHI FILE***
//10.Xoa danh sach
//11.Ve form them???
//12.Form cap nhat???
//13.Form nhap???
//14.Ve form dsnv???
//15.In NV
//16.Duyet danh sách

//Nhan vien rong
int TrongNhanVien(DanhSachNhanVien DSNhanVien) 
{
	return DSNhanVien.SoLuongNhanVien==0;
}

//Nhan vien day
int DayNhanVien(DanhSachNhanVien DSNhanVien)
{
	return DSNhanVien.SoLuongNhanVien==MaxNhanVien;
}

//Tim kiem nhan vien theo ma nhan vien, tra ve vi tri cua nhan vien trong danh sach
int TimNhanVien(DanhSachNhanVien DSNhanVien, string MANV)
{
	for(int i=0; i<DSNhanVien.SoLuongNhanVien; i++)
	{
		if(DSNhanVien.nodes[i]->MANV == MANV)
			return i;
	}
	return -1;
}

//Tim vi tri thich hop x theo ten
int TimViTriThichHopX(DanhSachNhanVien DSNhanVien, char Ho[30], char Ten[30])
{
	char key[60],keyi[60];
	strcpy(key,Ten);
    strcat(key,Ho);
    cout << "Stage 2" <<endl;
	for(int i=0; i < DSNhanVien.SoLuongNhanVien; i++)
	{
		
        strcpy(keyi, DSNhanVien.nodes[i]->Ten);
        cout << "Stage 3" <<endl;
        strcat(keyi, DSNhanVien.nodes[i]->Ho);
        cout << "Stage 3" <<endl;
        if(strcmp(key,keyi)>0)
			return i;
    }
    cout << "Stage 2" <<endl;
    return DSNhanVien.SoLuongNhanVien;
}

//Them Nhan Vien vao vi tri X
int ThemNhanVienVaoX(DanhSachNhanVien &DSNhanVien, NhanVien NHANVIEN, int DiaChi)
{
	if( DiaChi < 0 || DiaChi > DSNhanVien.SoLuongNhanVien || DayNhanVien(DSNhanVien) )
		return 0;
	DSNhanVien.nodes[DSNhanVien.SoLuongNhanVien] = new NhanVien;
	for( int i = DSNhanVien.SoLuongNhanVien; i < DiaChi; i--)
		*DSNhanVien.nodes[i]=*DSNhanVien.nodes[i-1];
	DSNhanVien.SoLuongNhanVien++;
	*DSNhanVien.nodes[DiaChi] = NHANVIEN;
	return 1;
}

//Them nhan vien sap xep theo ten
int ThemNhanVienTheoTen(DanhSachNhanVien &DSNhanVien, NhanVien NHANVIEN)
{
	int DiaChi = TimViTriThichHopX(DSNhanVien, NHANVIEN.Ho, NHANVIEN.Ten);
	cout << "Stage 1" <<endl;
	int kq = ThemNhanVienVaoX(DSNhanVien, NHANVIEN, DiaChi);
	cout << "Stage 1" <<endl;
	return kq;
}

//Xoa nut theo vi tri
int XoaNhanVienViTiX(DanhSachNhanVien &DSNhanVien, NhanVien NHANVIEN, int DiaChi)
{
	if( DiaChi < 0 || DiaChi > DSNhanVien.SoLuongNhanVien - 1 || TrongNhanVien(DSNhanVien) )
		return 0;
	for( int i = DiaChi; i < DSNhanVien.SoLuongNhanVien; i++)
		*DSNhanVien.nodes[i]=*DSNhanVien.nodes[i+1];
	delete DSNhanVien.nodes[DSNhanVien.SoLuongNhanVien - 1];
	DSNhanVien.SoLuongNhanVien--;
	return 1;
}

void XuatNhanVien(DanhSachNhanVien DSNhanVien)
{
	if(TrongNhanVien(DSNhanVien))
	{
		cout << "DS Rong";
		return;
	}
	
	for( int i = 0; i < DSNhanVien.SoLuongNhanVien; i++)
	{
		cout << DSNhanVien.nodes[i]->MANV << endl;
		cout << DSNhanVien.nodes[i]->Ho << endl;
		cout << DSNhanVien.nodes[i]->Ten << endl;
		cout << DSNhanVien.nodes[i]->Phai << endl;
	}
}

int main()
{
	int a;
	DanhSachNhanVien ds;
	NhanVien nv;
	ifstream f("Nhanvien.txt");
	
	while(!f.eof())
	{
		f >> nv.MANV;
		f >> nv.Ho;
		f >> nv.Ten;
		f >> nv.Phai;
		cout << "OK ";
 		ThemNhanVienTheoTen(ds,nv);
 		cout << "OK1 ";
	}
	XuatNhanVien(ds);
	return 0;
}

