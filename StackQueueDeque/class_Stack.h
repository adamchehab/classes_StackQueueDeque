#pragma once
#include "class_Elem.h"

class Stack
{
protected:
    Elem* head;

public:
    Stack();

    void init(int key);
    void antiInit(int size);
    virtual Elem* pop();
    virtual void push(Elem* el);
    virtual void push(int key);
    void print();
};