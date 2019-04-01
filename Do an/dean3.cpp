#include <iostream>
#define MAXNV 501
#define MAXVTCTHD 21
using namespace std;

typedef struct 
{
	int date;
	int month;
	int year;
} Date;

typedef struct 
{
	char MAVT[11];
	char TENVT[30], DVT[15];  //DVT = don vi tinh
	int SLT; // so luong ton
} VatTu;

struct nodesVatTu 
{
	VatTu info;
	struct nodesVatTu *left;
	struct nodesVatTu *right;
};

typedef struct nodesVatTu *PTRVatTu;
PTRVatTu VATTU = NULL;

typedef struct 
{
	char MAVT[10];
	int SL,DonGia,VAT; //VAT se la duoi dang xxx%
} CTHD;

typedef struct 
{
	CTHD VTHD[MAXVTCTHD]; 
	//VTHD = vat tu hoa don , dung de chi tung vat tu cua hoa don
	//MAXVTCTHD = 21 Max vat tu cua hoa don chi tiet 
	int SoLuongVT;
}DSCT;

typedef struct 
{
	char SoHD[21];
	Date NgayNhapHD;
	char Loai[2];  //'N' = chi nhap 'X' = chi xuat
	DSCT *CTHD; //chi tiet cua hoa don, lay dia chi tu DSCTHD
} HoaDon;

struct nodesHD
{
	HoaDon info;
	struct nodesHD *next;
};

typedef struct nodesHD *DSHoaDon;

DSHoaDon First = NULL;

typedef struct 
{
	int MANV;
	char ho[30],ten[30];
	DSHoaDon DSHDNV = NULL;   //danh sach hoa don nhan vien lam, chi den dia chi cua hoa don
} NhanVien;

typedef struct 
{
	int SoLuongNV;
	NhanVien *nodes[501];
} DSNhanVien;

int main() 
{
	return 0;
}

