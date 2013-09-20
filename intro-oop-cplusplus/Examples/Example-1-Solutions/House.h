// ACTIVITY 7
#include <iostream>
#include "Room.h"

#ifndef __Example1__House__
#define __Example1__House__

using namespace std;

const unsigned int MAX_ROOMS = 4;

class House {
public:
    House();
    
    ~House();
    
    bool addRoom(Room * room);
    
    unsigned int getRoomCount() const { return count; };
    
    static unsigned int getMaxRooms() { return MAX_ROOMS; };
    
    unsigned int getWindows() const;
    
    double getTotalArea() const;

private:
    friend ostream & operator<<(ostream &, const House &);
    unsigned int count;
    Room ** rooms;

};


#endif /* defined(__Example1__House__) */
