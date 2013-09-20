#include <stdio.h>
#include <cstring> // For strcpy and strcat
#include "DateTime.h"

using namespace std;

DateTime::DateTime() : Date(), Time()
{
    strcpy(dateTimeString, "1/1/1900 00:00:00");
}

DateTime::DateTime(int dy, int mon, int yr, int hr, int mt, int sc) : Date(dy, mon, yr), Time(hr, mt, sc)
{
    
    sprintf(dateTimeString, "%d/%d/%d %d:%d:%d", getMonth(), getDay(), getYear(), getHour(), getMin(), getSec());
    
}

