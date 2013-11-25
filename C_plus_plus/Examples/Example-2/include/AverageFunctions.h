#ifndef _AverageFunctions_
#define _AverageFunctions_

template <class T>
T totalAssignmentAverage(Assignment ** assignments, int count)
{

    T sum;

    sum = static_cast<T>(0);

    for( int i = 0; i < count; i++ ) {
        sum += assignments[i]->getScore();
    }

    return sum / static_cast<T>(count);
}

template <class T>
void totalAssignmentAverageRewrite(T & val, Assignment ** assignments, int count)
{

    T sum = totalAssignmentAverage<T>(assignments, count);

    val = sum;

}

template <class T, class V>
void totalAssignmentAverageWithVector(T & val, V vector)
{

    Assignment ** assignments = new Assignment*[vector.size()];

    for( int i = 0; i < vector.size(); i++ ) {
        assignments[i] = vector[i];
    }

    totalAssignmentAverageRewrite(val, assignments, vector.size());

}


#endif
