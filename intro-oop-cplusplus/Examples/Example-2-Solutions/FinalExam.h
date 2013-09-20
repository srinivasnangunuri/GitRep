#include <iostream>
#include "Assignment.h"

#ifndef __FinalExam__
#define __FinalExam__

class FinalExam : public Assignment
{
private:
    int questions;
    double points;
    int missed;
    
public:
    
    FinalExam()
    {
        questions = 0;
        points = 0.0;
        missed = 0;
    }
    
    FinalExam(int questions, int missed)
    {
        set(questions, missed);
    }
    
    void set(int, int);
    
    void adjustScore();
    
    double getQuestions() const
    {
        return questions;
    }
    
    double getPoints() const
    {
        return points;
    }
    
    int getMissed() const
    {
        return missed;
    }
    
};

#endif /* defined(__FinalExam__) */
