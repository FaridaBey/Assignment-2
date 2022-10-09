//person.cpp
#include <iostream>
#include"person.h"

person::person()
{
    name = " ";
    Id = 0;
    age = 18;
}
void person::set_name(string n)
{
    name = n;
}
void person::set_id(int i)
 {
    Id = i;
 }
void person::set_age(int a)
 {
    age = a;
 }
 string person::get_name()
{
     return name;
}
int person::get_id()
{
    return Id;
}
int person::get_age()
{
    return age;
}

