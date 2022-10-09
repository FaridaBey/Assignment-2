//
//  cust.h
//  Assignment 2
//
//  Created by Farida Sherif on 07/10/2022.
//

#ifndef cust_h
#define cust_h
#include <iostream>
#include"appointments.h"
#include "person.h"

using namespace std;

class customer : public person
{
private:
    int mechanic_id;
    struct appointment Slot;
public:
    customer();
    void set_mechanic_id(int x);
    void set_appointment(int h, int m);
    int get_mechanic_id();
    string get_appointment();
    bool operator == (customer const& a);
    bool operator < (customer const& a);
    bool operator > (customer const& a);
    int gethours();
    int getmins();
    // printinfo, as it was pure virtual in base class
    virtual void printinfo();
};


#endif /* cust_h */
