//
//  appointments.h
//  Assignment 2
//
//  Created by Farida Sherif on 30/09/2022.
//

#ifndef appointments_h
#define appointments_h
#include <iostream>

using namespace std;

struct appointment
{
public:
    int hours;
    int mins;
    appointment()
    {}
    appointment(int h, int m)
    {
        hours = h;
        mins = m;
    }
    int get_hour()
    {
        return hours;
    }
    int get_mins()
    {
        return mins;
    }
};

#endif /* appointments_h */
