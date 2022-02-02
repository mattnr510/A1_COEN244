//
//  reservationManager.cpp
//  Assignment1
//
//  Created by Matthew Noah Ruffolo on 2022-01-17.
//

#include "Reservation_Manager.h"
#include <iostream>
using namespace std;

//only constructor given that no parameters are needed in order to create a Reservation Manager
Reservation_Manager::Reservation_Manager(){
    //create a new guests res request array of absolute maximum size 140 (7 nights with 20 rooms available each night)
    this->arr = new Guests_Res_Request[maxNoOfNights*noOfRooms];
    this->numOfReservations = 0;

    //initialize the two dimensional array to 0
    for(int i = 0; i < maxNoOfNights; i++){
        for(int j=0; j < noOfRooms; j++){
            twoDimArray[i][j] = 0;
        }
    }
}

//method to add a valid reservation request to the Guests_Res_Request array and two dimensional array
int Reservation_Manager::addResRequest(Guests_Res_Request &reservation){
    //ensure that this Reservation Manager is not completely full of reservations
    if(numOfReservations < 140){

        //loop through every day which this guestsresrequest has a reservation set
        for(int i=reservation.getRoom().getCheckIn().getDay(); i <= reservation.getRoom().getCheckOut().getDay(); i++){
            //check if each day does not already have a certain room reserved
            //the minus one is here because we must ensure the array starts at 0;
            if(twoDimArray[i-1][reservation.getRoom().getRoomNum()-1] != 0){
                //if it finds a date in which the given room is taken, stop the loop and do not add the reservation
                cout << "Reservation #" << reservation.getReservationID() << " could not be added. Room " << reservation.getRoom().getRoomNum() << " is taken on March " << i << endl;
                return 0;

            }
        }
        //if no such date and room was taken, add this reservation to the reservation array
        arr[numOfReservations]= reservation;
        numOfReservations++;

        //also add this to the two dimensional array with its reservation id
        for(int i=reservation.getRoom().getCheckIn().getDay(); i <= reservation.getRoom().getCheckOut().getDay(); i++){
            twoDimArray[i-1][reservation.getRoom().getRoomNum()-1] = reservation.getReservationID();
        }
        cout << "Reservation #" << reservation.getReservationID() << " has been successfully added!" << endl;
    }
    else{
        //if entire array is full, stop right away
        cout << "Reservation #" << reservation.getReservationID() << " could not be added. No more space in the hotel!" << endl;
        return 0;
    }

    return reservation.getReservationID();
}

//print the info of the reservation with given id. Returns true if Reservation was found and false if not
bool Reservation_Manager::reservationInfo(int id){

    //loop through the array of Guest_Res_Requests
    for(int i=0; i<numOfReservations; i++){
        //if the reservation with the given id is found, print its contents
        if(arr[i].getReservationID() == id){
            arr[i].print();
            return true;
        }
    }
    //if the reservation is not found, return false
    return false;
}

//remove the reservation with given id from the two dimensional array. Returns true if reservation was cancelled and false otherwise
bool Reservation_Manager::reservationCancel(int id){

    bool isCancelled = false;

    //loop through the two dimensional array
    for(int i = 0; i < maxNoOfNights; i++){
        for(int j=0; j < noOfRooms; j++){
            //if the id is ever found in the array, set it to the default value (0)
            if(twoDimArray[i][j] == id){
                twoDimArray[i][j] = 0;
                isCancelled = true;
            }
        }
    }

    return isCancelled;
}

//getters
int Reservation_Manager::getMaxNoOfNights(){
    return this->maxNoOfNights;
}
int Reservation_Manager::getNoOfRooms(){
    return this->noOfRooms;
}
Guests_Res_Request* Reservation_Manager::getArr(){
    return this->arr;
}
int* Reservation_Manager::getTwoDimArray(){
    return *twoDimArray;
}

//print function and destructor
void Reservation_Manager::print(){

    cout << endl;
    //loop through an array 1 larger than the twodimensionalarray
    for(int i=0; i <= maxNoOfNights; i++){
        for(int j=0; j<=noOfRooms; j++){

            //proper format of a table with room numbers on the first row and dates on the first column
            if(i == 0 && j == 0){
                cout << '\t';
            }
            else if(i == 0){
                cout << '\t' << j;
            }
            else if(j == 0){
                cout << "Mar " << i;
            }
            else{
                cout << '\t' << twoDimArray[i-1][j-1];
            }
        }
        cout << endl;
    }

    cout << endl;
}
Reservation_Manager::~Reservation_Manager(){
    delete[] arr;
}
