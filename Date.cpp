//
//  date.cpp
//  Assignment1
//
//  Created by Matthew Noah Ruffolo on 2022-01-17.
//

#include "Date.h"
#include <iostream>
using namespace std;

//Default Constructor
Date::Date(){
    this->month = 0;
    this->day = 0;
    this->year = 0;
}

//Constructor with parameters
Date::Date(int m, int d, int y){
    this->month = m;
    this->day = d;
    this->year = y;
}

//Getters and Setters
int Date::getMonth(){
    return this->month;
}
int Date::getDay(){
    return this->day;
}
int Date::getYear(){
    return this->year;
}
void Date::setMonth(int m){
    this->month = m;
}
void Date::setDay(int d){
    this->day = d;
}
void Date::setYear(int y){
    this->year = y;
}

//Print function
void Date::print(){
    cout << this->month << "/" << this->day << "/" << this->year << " (MM/DD/YYYY)" << endl;
}

//Descructor
Date::~Date(){};
