#include <iostream>
#include "Date.h"
#include "Time.h"

#ifndef __DateTime__
#define __DateTime__

class DateTime : public Date, public Time
{

protected:
    char dateTimeString[20];

public:
    // Default constructor
    DateTime();

    // Constructor
    DateTime(int, int, int, int, int, int);

    // Accessor function
    const char * getDateTime() const
    {
        return dateTimeString;
    }

};

#endif /* defined(__DateTime__) */
