#include <iostream>

#ifndef __Example1__IShape__
#define __Example1__IShape__

class IShape {
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

#endif /* defined(__Example1__IShape__) */
