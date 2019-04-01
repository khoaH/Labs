#ifndef CAUTRUCDULIEU_H
#define CAUTRUCDULIEU_H

#include <iostream>
#define MaxNhanVien 500
#define MaxVatTu 20

typedef struct 
{
	int date;
	int month;
	int year;
} Ngay;

typedef struct 
{
	char TENVT[30], DVT[15];  //DVT = don vi tinh
	int SLT; // so luong ton
} VatTu;

struct nodesVatTu 
{
	VatTu info;
	struct nodesVatTu *left;
	struct nodesVatTu *right;
	char MAVT[11]; //key
};

typedef struct nodesVatTu *PTRVatTu;

typedef struct 
{
	char MAVT[10];
	float SL,DonGia,VAT; //VAT se la duoi dang xxx%
} ChiTietVatTu;

typedef struct
{
	int SoLuongVatTu;
	ChiTietVatTu NodesChiTiet[MaxVatTu];
}ChiTietHoaDon;


//typedef struct 
//{
//	CTHD VTHD[MAXVTCTHD]; 
//	//VTHD = vat tu hoa don , dung de chi tung vat tu cua hoa don
//	//MAXVTCTHD = 21 Max vat tu cua hoa don chi tiet 
//	int SoLuongVT;
//}DSCT;

typedef struct 
{
	char SoHoaDon[21];
	Ngay NgayNhapHoaDon;
	char Loai[2];  //'N' = chi nhap 'X' = chi xuat
	//ChiTietHoaDon *PTRChiTietHoaDon; //chi tiet cua hoa don, lay dia chi tu DSCTHD
} HoaDon;

struct NodesHoaDon
{
	HoaDon InfoHoaDon;
	struct NodesHoaDon *next;
	//ChiTietHoaDon *PTRChiTietHoaDon; //co nen chuyen dong 56 xuong day ko ?????????????????????????????????????????
};

typedef struct NodesHoaDon *PTRHoaDon;

typedef struct 
{
	PTRHoaDon First;
	PTRHoaDon Last;
}ListHoaDon;

typedef struct 
{
	int MANV;
	char Ho[30],Ten[30];
	int Phai;
	//ListHoaDon PTRHoaDonNhanVien;   //danh sach hoa don nhan vien lam, chi den dia chi cua hoa don
} NhanVien;

typedef struct 
{
	int SoLuongNhanVien;
	NhanVien *nodes[501];
} DanhSachNhanVien;

#endif
