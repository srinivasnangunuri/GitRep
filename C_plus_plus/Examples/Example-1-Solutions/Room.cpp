#include "Room.h"

void Room::addWindow()
{
    windows += 1;
}

void Room::addWindow(unsigned int w)
{
    windows += w;
}

int Room::getWindows() const
{
    return windows;
}