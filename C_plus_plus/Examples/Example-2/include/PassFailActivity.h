#include <iostream>
#include "Assignment.h"

#ifndef __PassFailActivity__
#define __PassFailActivity__

class PassFailActivity : public Assignment
{
protected:
    double minimum; // minimum passing score

public:

    PassFailActivity() : Assignment()
    {
        minimum = 0.0;
    }

    PassFailActivity(double m) : Assignment()
    {
        minimum = m;
    }

    void setMinimumPassingScore(double m)
    {
        minimum = m;
    }

    double getMinimumPassingScore() const
    {
        return minimum;
    }

    char getLetterGrade() const;

};

#endif /* defined(__PassFailActivity__) */
