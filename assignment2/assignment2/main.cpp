//
//  main.cpp
//  person
//
//  Created by Farida Sherif on 03/10/2022.

#include <iostream>
#include "cust.h"
#include "mechanic.h"
#include "appointments.h"
#include "templateQ.h"
using namespace std;

int main(){
    mechanic m[3];
    //mechanic 1
    m[0].set_name("Ayman");
    m[0].set_id(3001);
    m[0].set_age(25);
    //mechanic 2
    m[1].set_name("Khaled");
    m[1].set_id(3002);
    m[1].set_age(34);
    //mechanic 3
    m[2].set_name("Mai");
    m[2].set_id(3003);
    m[2].set_age(27);
    cout << "How many customers are there: " << endl;
    int x;
    cin >> x;
    vector <customer> c(x); //vector to store the customers' info
    
    cout << endl << endl;
    for(int i = 0; i<x; i++)
    {
        string name;
        int id;
        int age;
        int h,m;
        cout << "Customer no. " << i+1 << ":" << endl;
        cout << "Enter your name: " << endl;
        cin >> name;
        c[i].set_name(name);
        cout << "Enter your id: " << endl;
        cin >> id;
        c[i].set_id(id);
        cout << "Enter your age: " << endl;
        cin >> age;
        c[i].set_age(age);
        cout << "Enter your prefered appointment time: " << endl;
        cin >> h >> m;
        c[i].set_appointment(h, m);
    }
    cout << endl << ".........................................................." << endl << endl;
    int count =0;
    for(int i=0; i < x; i++)
    {
        if(m[count].is_available(c[i]))
        {
            m[count].set_schedule(c[i].gethours(), c[i].getmins());
            m[count].set_counter(m[count].get_counter()+1);
            c[i].set_mechanic_id(m[count].get_id());
            if(count == 2)
                count = 0;
            else
                count ++;
        }
        else if(m[count+1].is_available(c[i]))
        {
            m[count+1].set_schedule(c[i].gethours(), c[i].getmins());
            m[count+1].set_counter(m[count+1].get_counter()+1);
            c[i].set_mechanic_id(m[count+1].get_id());
            if(count == 2)
                count =0;
            else
                count ++;
        }
        else if(m[count+2].is_available(c[i]))
        {
            m[count+2].set_schedule(c[i].gethours(), c[i].getmins());
            m[count+2].set_counter(m[count+2].get_counter()+1);
            c[count+2].set_mechanic_id(m[count+2].get_id());
            if(count == 2)
                count =0;
            else
                count ++;
        }
        else
            c[i].set_mechanic_id(-1); //-1 id indicates that no mechanics were found for this customer
    }
    queue<customer>line(x);
    for(int i=0; i < x; i++)
    {
        if(!(c[i].get_mechanic_id()== -1)) //if the customer is assigned to a mechanic push into the queue
        {
            line.push(c[i]);
        }
    }
    
    for(int i=0; i < x; i++)
    {
        cout << ".........................................................." << endl;
        int y;
        cout << "Customer's info:" << endl;
        c[i].printinfo();
        y = c[i].get_mechanic_id();
        cout << "assigned mechanic's info:" << endl;
        if(y == m[0].get_id())
            m[0].printinfo();
        else if (y == m[1].get_id())
            m[1].printinfo();
        else if(y == m[2].get_id())
            m[2].printinfo();
        else if (y == -1)
            cout << "appointment cancelled" << endl << "no mechanics were available" << endl;
    }
    
    line.pop();

    return 0;
}

