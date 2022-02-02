//
//  guests.hpp
//  Assignment1
//
//  Created by Matthew Noah Ruffolo on 2022-01-17.
//

#ifndef guests_hpp
#define guests_hpp

#include <stdio.h>
#include "Information.h"
#include "Date.h"

class Guests{

private:
    //class variables as pointers in order to have dynamic memory allocation
    Date *checkIn, *checkOut;
    Information *roomGuestInfo;
    int numGuestsInRoom;
    int roomNum;

public:

    //constructors
    Guests();
    Guests(int,int,int,int,int,int,int);

    //add a guest to this room
    void addGuest(Information&);

    //getters and setters
    Date getCheckIn();
    Date getCheckOut();
    int getRoomNum();
    void setCheckIn(int,int,int);
    void setCheckOut(int,int,int);
    void setRoomNum(int);

    //print function and destructor
    void print();
    ~Guests();

};


#endif /* guests_hpp */
