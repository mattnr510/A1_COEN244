//
//  guests.cpp
//  Assignment1
//
//  Created by Matthew Noah Ruffolo on 2022-01-17.
//

#include "Guests.h"
#include <iostream>
using namespace std;

//default constructor create new Date objects and information array of size 4
Guests::Guests(){
    this->checkIn = new Date();
    this->checkOut = new Date();
    this->roomGuestInfo = new Information[4];
    this->numGuestsInRoom = 0;
    this->roomNum = 0;
}
//constructor with parameters
Guests::Guests(int monthIn, int dayIn, int yearIn, int monthOut, int dayOut, int yearOut, int room){

    this->checkIn = new Date(monthIn,dayIn,yearIn);
    this->checkOut = new Date(monthOut,dayOut,yearOut);

    this->roomGuestInfo = new Information[4];
    this->numGuestsInRoom = 0;
    this->roomNum = room;
}

//add a guest to the roomGuestInfo array and increase the number of guests in room by 1
void Guests::addGuest(Information &info){
    if(numGuestsInRoom < 4){
        this->roomGuestInfo[numGuestsInRoom] = info;
        this->numGuestsInRoom++;
        cout << info.getFirstName() << " has been added successfully!" << endl;
    }
    else{
        cout << info.getFirstName() << " could not be added. No more space in this room!" << endl;
    }
}

//getters and setters
Date Guests::getCheckIn(){
    return *this->checkIn;
}
Date Guests::getCheckOut(){
    return *this->checkOut;
}
int Guests::getRoomNum(){
    return this->roomNum;
}

void Guests::setCheckIn(int monthIn, int dayIn, int yearIn){
    this->checkIn = new Date(monthIn,dayIn,yearIn);
}
void Guests::setCheckOut(int monthOut, int dayOut, int yearOut){
    this->checkOut = new Date(monthOut,dayOut,yearOut);
}
void Guests::setRoomNum(int room){
    this->roomNum = room;
}

//print function making use of the date print function
void Guests::print(){
    cout << "Check-In Date: ";
    this->checkIn->print();
    cout << "Check-Out Date: ";
    this->checkOut->print();

    cout << "The Guests in this room are: " << endl;

    for(int i=0; i<numGuestsInRoom; i++){
        cout << '\t' << this->roomGuestInfo[i].getFirstName() << ' ' << this->roomGuestInfo[i].getLastName() << " - ";
        this->roomGuestInfo[i].getDateOfBirth().print();
    }

    cout << "Room Number " << this->roomNum << endl;
}

//destructor
Guests::~Guests(){
//    delete checkIn;
//    delete checkOut;
//    delete[] roomGuestInfo;
}


