#include "class_Elem.h"
using namespace std;

Elem::Elem(int key)
{
    this->key = key;
    this->next = nullptr;
}

void Elem::print()
{
    cout << this->key;
}

int Elem::getkey()
{
    return this->key;
}