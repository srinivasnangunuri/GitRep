#include <string>
#include <iostream>

#ifndef __RECTANGLE__
#define __RECTANGLE__

using namespace std;

class Rectangle
{
public:

    Rectangle(const string &);

    Rectangle(double w = 0.0, double l = 0.0);

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
};

#endif /* defined(__RECTANGLE__) */
