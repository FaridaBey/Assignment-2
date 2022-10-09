
//  mechanic.cpp
//  person
//
//  Created by Farida Sherif on 05/10/2022.
//
#include <iostream>
#include "mechanic.h"
#include"appointments.h"
#include "cust.h"
#include <vector>

using namespace std;

mechanic::mechanic()
{
    counter = 0;
    schedule.push_back(appointment());
}
bool mechanic::is_available(customer a)
{
    bool x = true;
    if (schedule.empty())
        return true;
    else
    {
        for (int i = 0; i < schedule.size(); i++)
        {
            if (!(a.gethours() == schedule.at(i).hours && a.getmins() == schedule.at(i).mins))
                x = true;
            else if (a.gethours() == schedule.at(i).hours && a.getmins() == schedule.at(i).mins)
                x = false;
        }
    }
    return x;
}
void mechanic::set_counter(int count)
{
    counter = count;
}
void mechanic::set_schedule(int h, int m)
{
    for (int i = 0; i < schedule.size(); i++)
    {
        schedule.at(i).hours = h;
        schedule.at(i).mins = m;

    }
}
int mechanic::get_counter()
{
    return counter;
}
void mechanic::get_schedule()
{
    string x;
    for (int i = 0; i < schedule.size(); i++)
    {
        cout << (schedule.at(i).hours) << ":" << (schedule.at(i).mins) << endl;
    }
}
void mechanic::printinfo()
{
    cout << "Name: " << name << endl << "ID: " << Id << endl << "Age: " << age << endl;
    cout << "Number of appointments: " << counter << endl;
}
