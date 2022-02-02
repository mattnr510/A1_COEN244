//
//  reservationManager.hpp
//  Assignment1
//
//  Created by Matthew Noah Ruffolo on 2022-01-17.
//

#ifndef reservationManager_hpp
#define reservationManager_hpp

#include <stdio.h>
#include "Guests_Res_Request.h"

class Reservation_Manager{

private:
    const int maxNoOfNights = 7;
    const int noOfRooms = 20;
    Guests_Res_Request *arr;
    int twoDimArray[7][20];
    int numOfReservations;

public:
    //constructor
    Reservation_Manager();

    //member functions required
    int addResRequest(Guests_Res_Request&);
    bool reservationInfo(int);
    bool reservationCancel(int);

    //getters (no setters needed)
    int getMaxNoOfNights();
    int getNoOfRooms();
    Guests_Res_Request* getArr();
    int* getTwoDimArray();

    //print function and destructor
    void print();
    ~Reservation_Manager();


};


#endif /* reservationManager_hpp */
