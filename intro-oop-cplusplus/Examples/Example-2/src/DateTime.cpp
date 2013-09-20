#include <stdio.h>
#include <cstring> // For strcpy and strcat
#include "DateTime.h"

using namespace std;

DateTime::DateTime() : Date(), Time()
{
}

DateTime::DateTime(int dy, int mon, int yr, int hr, int mt, int sc) : Date(dy, mon, yr), Time(hr, mt, sc)
{
}

