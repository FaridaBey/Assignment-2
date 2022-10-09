//
//  templateQ.h
//  Assignment 2
//
//  Created by Farida Sherif on 08/10/2022.
//

#ifndef templateQ_h
#define templateQ_h
#include <iostream>
#include <cstdlib>
using namespace std;
 
 
// A class to represent a queue
template <class customerQ>
class queue
{
    customerQ *arr;
    int size;
    int first;
    int end;
    int count;
 
public:
    queue(int size);
    void pop();
    void push(customerQ x);
    customerQ front();
    bool isEmpty();
    void sort();
};
 

template <class customerQ>
queue<customerQ>::queue(int x)
{
    size = x;
    arr = new customerQ[size];
    first = 0;
    end = -1;
    count = 0;
    
}
 
template <class customerQ>
void queue<customerQ>::pop()
{
    if (isEmpty())
        return;
 
    first = (first + 1);
    count--;
}
 
template <class customerQ>
void queue<customerQ>::push(customerQ item)
{
    end = (end + 1);
    arr[end] = item;
    count++;
    sort();
}

template <class customerQ>
customerQ queue<customerQ>::front()
{
    if (isEmpty())
    {
        return;
    }
    return arr[first];
}

template <class customerQ>
bool queue<customerQ>::isEmpty() {
    if(count == -1)
        return (true);
    else
        return false;
}

template <class customerQ>
void queue<customerQ>::sort()
{
    for (int i = first; i < size; i++)
    {
        for (int j = first; j < size - i; j++)
        {
            if (arr[i] > arr[j+1])
                swap(arr[i], arr[j+1]);
            
        }
    }
}

#endif /* templateQ_h */
