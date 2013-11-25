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

    // Activity 1
    Assignment homework(80.0);
    displayGrade(&homework);
    
    cout << endl;
    
    // Activity 2
    FinalExam exam(100, 3);
    displayGrade(&exam);
    
    cout << endl;
    
    // Activity 3
    PassFailActivity classwork(70.0);
    classwork.setScore(100.0);
    displayGrade(&classwork); // This should be 'P'
    
    cout << endl;
    
    // Activity 5
    Assignment ** assignments = new Assignment*[3];
    assignments[0] = &homework;
    assignments[1] = &exam;
    assignments[2] = &classwork;
    
    {
        double assignmentAverage;
        assignmentAverage = totalAssignmentAverage<double>(assignments, 3);
        cout << "Average with floating point precision: " << assignmentAverage << endl;
    }
    
    {
        int assignmentAverage;
        assignmentAverage = totalAssignmentAverage<int>(assignments, 3);
        cout << "Average with integer precision: " << assignmentAverage << endl;
    }
    
    cout << endl;
    
    // Activity 6
    {
        double assignmentAverage;
        totalAssignmentAverageRewrite(assignmentAverage, assignments, 3);
        cout << "Average with floating point precision: " << assignmentAverage << endl;
    }
    
    
    {
        int assignmentAverage;
        totalAssignmentAverageRewrite(assignmentAverage, assignments, 3);
        cout << "Average with integer precision: " << assignmentAverage << endl;
    }
    
    delete [] assignments;
    
    cout << endl;
    
    // Activity 7
    SimpleVector<Assignment *> assignmentVector(3);
    assignmentVector[0] = &homework;
    assignmentVector[1] = &exam;
    assignmentVector[2] = &classwork;
    
    {
        double assignmentAverage;
        totalAssignmentAverageWithVector(assignmentAverage, assignmentVector);
        cout << "Average with floating point precision: " << assignmentAverage << endl;
    }
    
    {
        int assignmentAverage;
        totalAssignmentAverageWithVector(assignmentAverage, assignmentVector);
        cout << "Average with integer precision: " << assignmentAverage << endl;
    }
    
    cout << endl;
    
    // Activity 8
    // Set the date and time of each assignment and print it out.
    
    homework.setDateTime(14, 9, 2013, 11, 45, 12);
    cout << "Homework DateTime: " << homework.getDateTime() << endl;
    
    exam.setDateTime(10, 9, 2013, 9, 25, 33);
    cout << "Exam DateTime: " << exam.getDateTime() << endl;
    
    classwork.setDateTime(26, 8, 2013, 4, 51, 00);
    cout << "Classwork DateTime: " << classwork.getDateTime() << endl;
    
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