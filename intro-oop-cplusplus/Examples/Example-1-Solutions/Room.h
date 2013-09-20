#import "Rectangle.h"
#include <iostream>

#ifndef __Example1__Room__
#define __Example1__Room__

using namespace std;
 
class Room : public Rectangle {

public:
    Room(const string & name) : Rectangle(name) {
        windows = 0;
    };
    
    Room(const string & name, double w, double l) : Rectangle(name, w, l) {};
    
    Room() : Rectangle() {};
 
    void addWindow();
 
    void addWindow(unsigned int);
 
    int getWindows() const;
 
protected:

private:
    int windows;
 
};
 
#endif /* defined(__Example1__Room__) */