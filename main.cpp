//
//  main.cpp
//  Assignment1
//
//  Created by Matthew Noah Ruffolo on 2022-01-17.
//

#include <iostream>
#include "Information.h"
#include "Guests.h"
#include "Guests_Res_Request.h"
#include "Reservation_Manager.h"

using namespace std;

void pressEnter(){
    cout << "\nPress ENTER To Continue";
    cin.get();
    cout << endl;
}


int main() {

    //Create the Reservation Manager Object (The Hotel Cplusplus)
    cout << "Creation of Reservation Manager Object (Cplusplus)" << endl;
    pressEnter();

    Reservation_Manager cPlusPlus;
    cPlusPlus.print();


    //Create 10 information objects (10 People)
    cout << "Creation of 10 Information Objects (10 people)" << endl;
    pressEnter();

    cout << "-Person 1-" << endl;
    Information person1("Matthew Noah","Ruffolo",9,20,2002);
    person1.print();
    cout << "\n-Person 2-" << endl;
    Information person2("Natalie","Ekmekdjian",10,20,1999);
    person2.print();
    cout << "\n-Person 3-" << endl;
    Information person3("Isabella","Carlone",12,11,1998);
    person3.print();
    cout << "\n-Person 4-" << endl;
    Information person4("Joseph","Di Pasquale",9,13,2000);
    person4.print();
    cout << "\n-Person 5-" << endl;
    Information person5("Bruno","Ruffolo",5,11,1968);
    person5.print();
    cout << "\n-Person 6-" << endl;
    Information person6("Nadia","Olivieri",5,15,1974);
    person6.print();
    cout << "\n-Person 7-" << endl;
    Information person7("Dav","Bocc",5,2,2002);
    person7.print();
    cout << "\n-Person 8-" << endl;
    Information person8("Marco","D'Amato",9,21,2002);
    person8.print();
    cout << "\n-Person 9-" << endl;
    Information person9("Gianni","Thibodeau",4,4,2002);
    person9.print();
    cout << "\n-Person 10-" << endl;
    Information person10("Gabriele","Delle Donne",4,17,2002);
    person10.print();


    //Create a room with check in date Mar1 and Check Out Date Mar7
    cout << "\n\nCreation of Guests object (a room)" << endl;
    pressEnter();

    Guests room1(3,1,2022,3,7,2022,1);
    cout << "\n\nRoom Info:" << endl;
    room1.print();


    //attempt to add 5 guests
    cout << "\n\nAttempt to Add 5 guests to Room 1" << endl;
    pressEnter();

    room1.addGuest(person1);
    room1.addGuest(person2);
    room1.addGuest(person3);
    room1.addGuest(person4);
    room1.addGuest(person5);
    cout << endl;
    room1.print();


    //create first reservation
    cout << "\n\nFirst Reservation Request" << endl;
    pressEnter();

    Guests_Res_Request reservation1(&room1);
    reservation1.print();

    //add reservation to hotel
    cout << "Add Reservation 1 to Cplusplus" << endl;
    pressEnter();

    cPlusPlus.addResRequest(reservation1);
    cPlusPlus.print();


    //Create a room with check in date Mar4 and Check Out Date Mar6
    cout << "\n\nCreation of Guests object (a room)" << endl;
    pressEnter();

    Guests room2(3,4,2022,3,6,2022,4);
    cout << "\n\nRoom Info:" << endl;
    room2.print();


    //add 2 guests
    cout << "\n\nAdd 2 guests to Room 4" << endl;
    pressEnter();

    room2.addGuest(person5);
    room2.addGuest(person6);
    cout << endl;
    room2.print();


    //create second reservation
    cout << "\n\nSecond Reservation Request" << endl;
    pressEnter();

    Guests_Res_Request reservation2(&room2);
    reservation2.print();

    //add reservation to hotel
    cout << "Add Reservation 2 to Cplusplus" << endl;
    pressEnter();

    cPlusPlus.addResRequest(reservation2);
    cPlusPlus.print();


    //Create a room with check in date Mar2 and Check Out Date Mar4
    cout << "\n\nCreation of Guests object (a room)" << endl;
    pressEnter();

    Guests room3(3,2,2022,3,4,2022,20);
    cout << "\n\nRoom Info:" << endl;
    room3.print();


    //add guest
    cout << "\n\nAdd 1 guest to Room 20" << endl;
    pressEnter();

    room3.addGuest(person7);
    cout << endl;
    room3.print();


    //create third reservation
    cout << "\n\nThird Reservation Request" << endl;
    pressEnter();

    Guests_Res_Request reservation3(&room3);
    reservation3.print();

    //add reservation to hotel
    cout << "Add Reservation 3 to Cplusplus" << endl;
    pressEnter();

    cPlusPlus.addResRequest(reservation3);
    cPlusPlus.print();



    //Create a room with check in date Mar1 and Check Out Date Mar3
    cout << "\n\nCreation of Guests object (a room)" << endl;
    pressEnter();

    Guests room4(3,1,2022,3,3,2022,4);
    cout << "\n\nRoom Info:" << endl;
    room4.print();


    //add 2 guests
    cout << "\n\nAdd 2 guests to Room 4" << endl;
    pressEnter();

    room4.addGuest(person8);
    room4.addGuest(person9);
    cout << endl;
    room4.print();


    //create fourth reservation
    cout << "\n\Fourth Reservation Request" << endl;
    pressEnter();

    Guests_Res_Request reservation4(&room4);
    reservation4.print();

    //add reservation to hotel
    cout << "Add Reservation 4 to Cplusplus" << endl;
    pressEnter();

    cPlusPlus.addResRequest(reservation4);
    cPlusPlus.print();


    //Create a room with check in date Mar2 and Check Out Date Mar2
    cout << "\n\nCreation of Guests object (a room)" << endl;
    pressEnter();

    Guests room5(3,2,2022,3,2,2022,10);
    cout << "\n\nRoom Info:" << endl;
    room2.print();


    //add guest
    cout << "\n\nAdd 1 guest to Room 10" << endl;
    pressEnter();

    room5.addGuest(person10);
    cout << endl;
    room5.print();


    //create fifth reservation
    cout << "\n\nFifth Reservation Request" << endl;
    pressEnter();

    Guests_Res_Request reservation5(&room5);
    reservation5.print();

    //add reservation to hotel
    cout << "Add Reservation 5 to Cplusplus" << endl;
    pressEnter();

    cPlusPlus.addResRequest(reservation5);
    cPlusPlus.print();


    if(cPlusPlus.reservationInfo(10)){
        cout << "Reservation #10 Found!" << endl;
    }
    else{
        cout << "Reservation #10 was Not Found" << endl;
    }
    if(cPlusPlus.reservationInfo(143)){
        cout << "Reservation #143 Found!" << endl;
    }
    else{
        cout << "Reservation #143 Not Found" << endl;
    }
    if(cPlusPlus.reservationCancel(143)){
        cout << "Reservation #143 Cancelled" << endl;
    }
    else{
        cout << "Reservation #143 was Not Found" << endl;
    }
    if(cPlusPlus.reservationCancel(143)){
        cout << "Reservation #143 Cancelled" << endl;
    }
    else{
        cout << "Reservation #143 was Not Found" << endl;
    }
    cPlusPlus.print();


    return 0;
}
