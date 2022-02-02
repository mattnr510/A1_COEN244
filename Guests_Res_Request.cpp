//
//  guestsResRequest.cpp
//  Assignment1
//
//  Created by Matthew Noah Ruffolo on 2022-01-18.
//

#include "Guests_Res_Request.h"
#include <iostream>
using namespace std;

//static counter initialized to 0
int Guests_Res_Request::counter = 0;

//default constructor to initialize room and assign reservationID from counter
Guests_Res_Request::Guests_Res_Request(){
    this->roomInfo = new Guests();
    this->numNights = 0;
    this->reservationID = 0;
}
//constructor with parameters of guest object. also assigns reservationID from counter and calculates numNights
Guests_Res_Request::Guests_Res_Request(Guests *rm){
    this->roomInfo = rm;

    //calculate the number of nights by looping from the check in day to the check out day
    this->numNights = 0;
    for(int i = rm->getCheckIn().getDay(); i <= rm->getCheckOut().getDay(); i++){
        this->numNights++;
    }
    counter++;
    this->reservationID = counter;
}

//getters and setters
Guests Guests_Res_Request::getRoom(){
    return *this->roomInfo;
}
int Guests_Res_Request::getReservationID(){
    return this->reservationID;
}
int Guests_Res_Request::getNumNights(){
    return this->numNights;
}
void Guests_Res_Request::setGuest(Guests *rm){
    this->roomInfo = rm;
}

//print funciton
void Guests_Res_Request::print(){
    cout << "Guest Info: " << endl;
    this->roomInfo->print();
    cout << "Number of Nights: " << this->numNights << "\nReservation ID: " << this->reservationID << endl;
}

//destructor
Guests_Res_Request::~Guests_Res_Request(){
//    delete roomInfo;
}

