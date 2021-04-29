#include "class_Queue.h"

Queue::Queue()
{
    head = nullptr;
    tail = nullptr;
}

Elem* Queue::pop()
{
    if (head == nullptr)
        return (nullptr);
    if (head == tail)
        tail = nullptr;
    return (Stack::pop());
}

void Queue::push(Elem* el)
{
    if (head == nullptr)
        head = tail = el;
    else
        tail = tail->next = el;
}

void Queue::push(int key)
{
    push(new Elem(key));
}
