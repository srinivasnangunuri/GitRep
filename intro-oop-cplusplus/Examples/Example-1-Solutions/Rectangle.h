#include <string>
#include <iostream>
#include "IShape.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

const double DEFAULT_WIDTH = 5.0, DEFAULT_LENGTH = 5.0;

using namespace std;

class Rectangle : public IShape
{
public:
    
    Rectangle(const string &);
    
    Rectangle(double w = DEFAULT_WIDTH, double l = DEFAULT_LENGTH);
    
    Rectangle(const string& name, double w, double l);
    
    Rectangle(const Rectangle& other);
    
    Rectangle& operator=(const Rectangle& other);
    
    string getName() const;
    
    double getWidth() const { return width; }
    
    void setWidth(double val) { width = val; }
    
    double getLength() const { return length; }
    
    void setLength(double val) { length = val; }
    
    double getArea() const { return length*width; }
    
    double getPerimeter() const { return (length*2.0)+(width*2.0); }
    
protected:
private:
    string name;
    double width;
    double length;
    friend ostream & operator<<(ostream &, const Rectangle &);
};



#endif // RECTANGLE_H
