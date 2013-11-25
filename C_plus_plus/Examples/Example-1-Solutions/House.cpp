#include "House.h"

House::House()
{
    count = 0;
    rooms = new Room *[MAX_ROOMS];
}

bool House::addRoom(Room * room)
{
    if( count >= MAX_ROOMS ) return false;
    
    rooms[count] = room;
    count++;
    
    return true;
}

unsigned int House::getWindows() const
{
    unsigned int windows = 0;
    
    for( int i = 0; i < count; i++ )
    {
        windows += rooms[i]->getWindows();
    }
    
    return windows;
}

double House::getTotalArea() const
{
    double area = 0.0;
    
    for( int i = 0; i < count; i++ )
    {
        area += rooms[i]->getArea();
    }
    
    return area;
}

House::~House()
{
    
    cout << "Destructing the house object." << endl;
    
    for( int i = 0; i < count; i++ ) delete rooms[i];
    
    delete [] rooms;
    
}

ostream & operator<<(ostream &stream, const House & house)
{
    stream << "House(rooms: [";
    
    for( int i = 0; i < house.count; i++ )
        stream << ((i == 0) ? "" : ", ") << house.rooms[i]->getName();
    
    return stream << "], total: " << house.count << ", windows: " << house.getWindows() << ")";
    
}