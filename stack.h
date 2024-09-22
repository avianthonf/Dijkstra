#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <algorithm>
using namespace std;

class Stack
{
  private:
    int index= -1;
    int max = 0;
    int* list;
  
  public:
    Stack(int n)
    {   
        max = n;
        list = new int[max];
    }
    
    void push(int n)
    {
        list[++index] = n;
    }
    
    int pop()
    {
        if (index > -1)
        {
            return list[index--];
        }
        else
        {
            return 0;
        }
    }
    
    int peek()
    {
        if (index > -1)
        {
            return list[index];
        }
        else {
            return 0;
        }
    }
  
    void sortAscending()
    {
        sort(&list[0], &list[index + 1], greater<int>());
    }
  
};

#endif