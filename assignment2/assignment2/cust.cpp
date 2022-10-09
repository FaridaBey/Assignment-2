//
//  cust.cpp
//  person
//
//  Created by Farida Sherif on 07/10/2022.
//

#include <iostream>
#include "cust.h"
#include <string>
#include"appointments.h"
using namespace std;

customer::customer() :Slot(0, 0) //intialized the struct with 0 hours and mins
{
    mechanic_id = 0;
}
void customer::set_mechanic_id(int x)
{
    mechanic_id = x;
}
void customer::set_appointment(int h, int m)
{
    Slot.hours = h;
    Slot.mins = m;
}
int customer::get_mechanic_id()
{
    return mechanic_id;
}
string customer::get_appointment()
{
    if(Slot.hours < 10 && Slot.mins < 10)
        return ("0" + to_string(Slot.hours) + ":" +"0" + to_string(Slot.mins));
    else if(Slot.hours < 10 && Slot.mins > 10)
        return ("0" + to_string(Slot.hours) + ":" + to_string(Slot.mins));
    else if(Slot.hours > 10 && Slot.mins < 10)
        return (to_string(Slot.hours) + ":" + "0" + to_string(Slot.mins));
    else
        return (to_string(Slot.hours) + ":" + to_string(Slot.mins));
}
// Overload operators
bool customer::operator == (customer const& a)
{
    if ((this->Slot.hours == a.Slot.hours) && (this->Slot.mins == a.Slot.mins))
        return true;
    return false;
}
bool customer::operator < (customer const& a)
{
    if (this->Slot.hours < a.Slot.hours)
        return true;
    else if ((this->Slot.hours == a.Slot.hours) && (this->Slot.mins < a.Slot.mins))
        return true;
    return false;
}
bool customer::operator > (customer const& a)
{
    if (this->Slot.hours > a.Slot.hours)
        return true;
    else if ((this->Slot.hours == a.Slot.hours) && (this->Slot.mins > a.Slot.mins))
        return true;
    return false;
}
int customer::gethours()
{
    return Slot.hours;
}
int customer::getmins()
{
    return Slot.get_mins();
}
//defining print function
void customer::printinfo()
{
    cout << "Name: " << name << endl << "ID: " << Id << endl << "Age: " << age << endl;
    cout << "Appointment time: " << get_appointment() << endl;

}

