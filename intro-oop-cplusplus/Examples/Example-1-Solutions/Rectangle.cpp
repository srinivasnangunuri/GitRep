#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(const string & name) : name(name)
{
    width = DEFAULT_WIDTH;
    length = DEFAULT_LENGTH;
}

Rectangle::Rectangle(double w, double l)
{
    width = w;
    length = l;
}

Rectangle::Rectangle(const string& name, double w, double l) : name(name)
{
    width = w;
    length = l;
}

Rectangle::Rectangle(const Rectangle& other)
{
    width = other.width;
    length = other.length;
    name = string(other.name);
}

Rectangle& Rectangle::operator=(const Rectangle& rhs)
{
    if (this == &rhs) return *this; // handle self assignment

    width = rhs.width;
    length = rhs.length;
    name = string(rhs.name);

    return *this;
}

string Rectangle::getName() const
{
    return (name.empty()) ? "no name" : name;
}

ostream & operator<<(ostream &stream, const Rectangle & rect)
{
    return stream << "Rectangle(name: " << rect.getName() << ", width: " << rect.getWidth() << ", length: " << rect.getLength() << ")" << endl;
}
