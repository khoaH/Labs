#ifndef MYCODEHOADON_H
#define MYCODEHOADON_H

#include "CauTrucDuLieu.h"

void Create_ListHoaDon(ListHoaDon &l);
bool Empty(ListHoaDon l);
void InsertFirst(ListHoaDon &l, HoaDon hd);
void InsertLast(ListHoaDon &l, HoaDon hd);
void DeleteFirst(ListHoaDon &l);
void DeleteLast(ListHoaDon &l);
void OutputConsole(ListHoaDon &l);

#endif
