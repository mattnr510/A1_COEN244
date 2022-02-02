//
//  date.hpp
//  Assignment1
//
//  Created by Matthew Noah Ruffolo on 2022-01-17.
//

#ifndef date_hpp
#define date_hpp

#include <stdio.h>

class Date{

private:
    //private variables for Date
    int month, day, year;

public:
    //Constructors
    Date();
    Date(int,int,int);

    //Getters and Setters
    int getMonth();
    int getDay();
    int getYear();
    void setMonth(int);
    void setDay(int);
    void setYear(int);

    //Print function and Desctructor
    void print();
    ~Date();
};

#endif /* date_hpp */
