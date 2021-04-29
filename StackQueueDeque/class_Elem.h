#pragma once
#include <iostream>

class Elem
{
private:
    int key;
    Elem* next;

public:
    Elem(int key);
    void print();
    int getkey();

    friend class Stack;
    friend class Queue;
    friend class Deque;
};

