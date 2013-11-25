#include <iostream>
#include <iomanip>
#include "Assignment.h"
#include "FinalExam.h"
#include "PassFailActivity.h"
#include "AverageFunctions.h"
#include "SimpleVector.h"

// Function prototype
void displayGrade(const Assignment *);

// Set the namespace
using namespace std;

int main(int argc, const char * argv[])
{
    return 0;
}

void displayGrade(const Assignment * assignment)
{
    cout << setprecision(1) << fixed;
    cout << "The activity's numeric score is "
    << assignment->getScore() << endl;
    cout << "The activity's letter grade is "
    << assignment->getLetterGrade() << endl;
    return;
}
