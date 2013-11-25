#include "FinalExam.h"

void FinalExam::set(int q, int m)
{
    double numericScore;
    
    questions = q;
    missed = m;
    
    points = 100.0 / questions;
    
    numericScore = 100 - ( missed * points );
    
    setScore(numericScore);
    
    adjustScore();
    
}

// If score is 0.5 points of the next whole point, round the score up and recalculate
// the letter grade.
void FinalExam::adjustScore()
{
    
    // We would like to know the difference. By static casting to int
    // we loose the precision and the resultant is rounded to the nearest
    // value. Thus allowing the determination of the difference to the
    // next whole number.
    double fraction = score - static_cast<int>(score);
    
    if ( fraction >= 0.5 )
    {
        score += (1.0 - fraction);
    }
    
}