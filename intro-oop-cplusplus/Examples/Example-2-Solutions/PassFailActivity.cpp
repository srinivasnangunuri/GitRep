#include "PassFailActivity.h"

char PassFailActivity::getLetterGrade() const
{
    
    char letterGrade;
    
    if ( score >= minimum ) letterGrade = 'P';
    
    else letterGrade = 'F';
    
    return  letterGrade;
    
}
