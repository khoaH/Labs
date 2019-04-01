#include <string.h>
#define MaxNhanVien 500
#define MaxVatTu 20
#define TRUE 1
#define FALSE 0
using namespace std;

typedef struct 
{
	int date;
	int month;
	int year;
} Date;

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
PTRVatTu VATTU = NULL;

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
	Date NgayNhapHoaDon;
	char Loai[2];  //'N' = chi nhap 'X' = chi xuat
	ChiTietHoaDon *PTRChiTietHoaDon; //chi tiet cua hoa don, lay dia chi tu DSCTHD
} HoaDon;

struct NodesHoaDon
{
	HoaDon InfoHoaDon;
	struct NodesHoaDon *next;
};

typedef struct NodesHoaDon *PTRHoaDon;

typedef struct 
{
	PTRHoaDon First;
	PTRHoaDon Last;
}ListHoaDon;

typedef struct 
{
	string MANV;
	//string Ho,Ten;
	//int MANV;						
	char Ho[30],Ten[30];
	int Phai;
	//ListHoaDon PTRHoaDonNhanVien;   //danh sach hoa don nhan vien lam, chi den dia chi cua hoa don
} NhanVien;

typedef struct 
{
	int SoLuongNhanVien;
	NhanVien *nodes[MaxNhanVien];
} DanhSachNhanVien;

