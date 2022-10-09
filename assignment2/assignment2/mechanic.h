//
//  mechanic.h
//  Assignment 2
//
//  Created by Farida Sherif on 30/09/2022.
//

#ifndef mechanic_h
#define mechanic_h
#include <iostream>
#include"appointments.h"
#include "person.h"
#include "cust.h"
#include <vector>


using namespace std;

class mechanic: public person
{
private:
    int counter;
    vector <struct appointment> schedule;

    
public:
    mechanic();
    bool is_available(customer a);
    void set_counter(int count);
    void set_schedule(int h, int m);
    int get_counter();
    void get_schedule();
    virtual void printinfo();
};

#endif /* mechanic_h */
