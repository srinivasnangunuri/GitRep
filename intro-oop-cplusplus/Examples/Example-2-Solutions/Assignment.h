#include <iostream>
#include "DateTime.h"

#ifndef __Assignment__
#define __Assignment__

class Assignment
{
protected:
    double score;
    
public:
    
    DateTime * dateTime;
    
    Assignment()
    {
        score = 0.0;
        dateTime = new DateTime();
    }
    
    virtual ~Assignment()
    {
        delete dateTime;
    }
    
    Assignment(double s)
    {
        score = s;
        dateTime = new DateTime();
    }
    
    void setScore(double s)
    {
        score = s;
    }
    
    double getScore() const
    {
        return score;
    }
    
    void setDateTime(int day, int month, int year, int hour, int min, int sec)
    {
        delete dateTime;
        dateTime = new DateTime(day, month, year, hour, min, sec);
    }
    
    const char * getDateTime() const
    {
        return dateTime->getDateTime();
    }
    
    // Activity 4
    // declare this virtual and run examples again.
    virtual char getLetterGrade() const;
    
};

#endif /* defined(__Assignment__) */
