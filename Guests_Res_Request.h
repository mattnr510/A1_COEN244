//
//  guestsResRequest.hpp
//  Assignment1
//
//  Created by Matthew Noah Ruffolo on 2022-01-18.
//

#ifndef guestsResRequest_hpp
#define guestsResRequest_hpp

#include <stdio.h>
#include "Guests.h"

class Guests_Res_Request{

private:
    //class variables
    Guests *roomInfo;
    static int counter;
    int reservationID;
    int numNights;

public:
    //constructors
    Guests_Res_Request();
    Guests_Res_Request(Guests*);

    //getters and setters
    Guests getRoom();
    int getReservationID();
    int getNumNights();
    void setGuest(Guests*);

    //print function and destructor
    void print();
    ~Guests_Res_Request();

};


#endif /* guestsResRequest_hpp */
