//
//  person.h
//  Assignment 2
//
//  Created by Farida Sherif on 30/09/2022.
//

#ifndef person_h
#define person_h
#include <iostream>

using namespace std;

class person
{
protected:
    string name;
    int Id;
    int age;
public:
    person();
    void  set_name(string n);
    void  set_id(int i);
    void  set_age(int a);
    string  get_name();
    int  get_id();
    int  get_age();
    void virtual printinfo() = 0;
};

#endif /* person_h */
