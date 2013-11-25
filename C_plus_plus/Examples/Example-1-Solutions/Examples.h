#include <iostream>
#include <assert.h>
#include "Rectangle.h"
#include "Room.h"
#include "House.h"

#ifndef Example1_Examples_h
#define Example1_Examples_h

using namespace std;

void Example1_1(void)
{
    cout << "Example 1.1) Creating a rectangle class in the stack with the string constructor." << endl;
    Rectangle rect("Rectangle1");
    cout << " ^ the Rectangle() constructor called the String(const string &) constructor automatically." << endl;
}

void Example1_2(void)
{
    cout << "Example 1.2) Creating a rectangle class in the stack with the default constructor." << endl;
    Rectangle rect;
    cout << " ^ the Rectangle() constructor set the width, length and windows to 0." << endl;
}

// ! Activity 1
void Example1_3(void)
{
    cout << "Example 1.3) What happens if we call the getName() on a rectangle with no name?" << endl;
    Rectangle rect;
    cout << "Name of rect: " << rect.getName() << endl;
    cout << " ^ the name, a string object, is empty." << endl;
}

// ! Activity 2
void Example1_4(void)
{
    cout << "Example 1.4) If we create a rectangle with the string constructor what is the values for length, width and windows." << endl;
    Rectangle rect("Small Rectangle");
    cout << "width: " << rect.getWidth() << endl;
    cout << "length: " << rect.getLength() << endl;
    cout << " ^ the compiler has automatically set the values to 0.0 (0)." << endl;
}

void Example1_5(void)
{
    
    cout << "Example 1.5) Using cin to get data from user and displaying it with cout." << endl;
    
    double width, length; // OR double width;
                          //    double height;
    string name;
    
    cout << "What should the dimensions of the rectangle be?" << endl;
    cout << "width: ";
    cin >> width;
    cout << "length: ";
    cin >> length;
    cout << "name: ";
    cin >> name;
    
    Rectangle rect(name, width, length);
    
}

void Example1_6(void)
{
    
    cout << "Example 1.6) Using cin to get data from user and displaying it with cout." << endl;
    double width, length;
    string name;
    
    cout << "width: ";
    cin >> width;
    cout << "length: ";
    cin >> length;
    cout << "name: ";
    cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    getline(cin, name);
    
    Rectangle rect(name, width, length);
    
}

void Example1_7() {
    
    cout << "Example 1.7) Copy constructor and = operator." << endl;
    
    Rectangle r1("Rectangle 1", 13.2, 11.5);
    
    cout << endl;
    
    {
        cout << "  (A) Attempting to copy using the copy constructor." << endl;
        
        Rectangle r2(r1);
        
        assert(r2.getWidth() == r1.getWidth());
        assert(r2.getLength() == r1.getLength());
        assert(r2.getName().compare(r1.getName()) == 0);
        
        cout << "  [SUCCESSFUL] All assertions true. The copy constructor was properly implemented." << endl;
    }
    
    cout << endl;
    
    {
        cout << "  (B) Attempting to copy using the overloaded = operator." << endl;
        
        Rectangle r2;
        r2 = r1;
        
        assert(r2.getWidth() == r1.getWidth());
        assert(r2.getLength() == r1.getLength());
        assert(r2.getName().compare(r1.getName()) == 0);
        
        cout << "  [SUCCESSFUL] All assertions true. The the overloaded = operator was properly implemented." << endl;
    }
    
}

void Example2_1(void)
{
 
    cout << "Example 2.1) Implement the IShape in Rectangle." << endl;
    
    Rectangle r1("Rectangle 1", 13.2, 15.7);
    
    double perimeter = 13.2+13.2+15.7+15.7;
    double area = 13.2*15.7;
    
    // ACTIVITY 6 dyanmic_cast
    IShape * shape = dynamic_cast<IShape *>(&r1);
    
    assert(shape->getArea() == area);
    assert(shape->getPerimeter() == perimeter);
    
    cout << "  [SUCCESS] The area and perimeter methods declared in \"interface\" IShape have been properly implemented." << endl;
    cout << "  The area is: " << shape->getArea() << endl;
    cout << "  The perimeter is: " << shape->getPerimeter() << endl;
    
}

void Example2_2(void)
{
    
    cout << "Example 2.2) Creating a Room class which extends Rectangle." << endl;
    
    Room r("Living Room");
    
    cout << "Created a room with the name: " << r.getName() << endl;
    
}

void Example2_3_1(void)
{
    
    Room * house[] =
    {
        new Room("Living Room", 13.0, 13.0),
        new Room("Kitchen", 10.0, 10.0),
    };
    
    // C++ feature.
    Room house2[] =
    {
        {"Living Room", 13.0, 13.0},
        {"Kitchen", 10.0, 10.0}
    };
    
}

void Example2_3(void)
{
    // Activity 8
    // 1. Create a new house with the default rooms, which is 4.
    House house;
    
    // 2. Create our rooms.
    // When accessing an objects member in the stack we use a '.'
    // However when accessing from a pointer we use the '->'.
    // We could also say: (* living).addWindow();
    Room * living = new Room("Living Room", 13.0, 13.0);
    living->addWindow(2);
    
    Room * kitchen = new Room("Kitchen", 10.0, 10.0);
    kitchen->addWindow();
    
    Room * bathroom = new Room("Bathroom", 5.0, 5.0);
    bathroom->addWindow(3);
    
    Room * bedroom = new Room("Bedroom", 14.0, 14.0);
    bedroom->addWindow(1);
    
    // Activity 9
    // what if we add one more room?
    Room * gameroom = new Room("Game Room", 7.0, 7.0);
    
    // 3. Add the rooms to the house.
    house.addRoom(living);
    house.addRoom(kitchen);
    house.addRoom(bathroom);
    house.addRoom(bedroom);
    
    // what if we add one more room?
    house.addRoom(gameroom);
    
    // how do i print out info about the room?
    // here we use a static cast
    Rectangle kitchenRect = static_cast<Rectangle>(*kitchen);
    cout << "Kitchen Rectangle Info: " << kitchenRect << endl;
    
    // 4. Some information about the house.
    cout << house << endl;
}

#endif
