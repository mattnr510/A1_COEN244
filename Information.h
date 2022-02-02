//
//  information.hpp
//  Assignment1
//
//  Created by Matthew Noah Ruffolo on 2022-01-18.
//

#ifndef information_hpp
#define information_hpp

#include <stdio.h>
#include "Date.h"

class Information{

private:
    //Class variables as pointers in order to have dynamic memory allocation
    char *firstName;
    char *lastName;
    Date *dateOfBirth;

public:
    //Constructors
    Information();
    Information(char*,char*,int,int,int);

    //getters and setters
    char* getFirstName();
    char* getLastName();
    Date getDateOfBirth();
    void setFirstName(char*);
    void setLastName(char*);
    void setDateOfBirth(int,int,int);

    //print function and destructor
    void print();
    ~Information();
};



#endif /* information_hpp */
