#pragma once
#include "class_Queue.h"

class Deque : public Queue
{
public:
	Deque();

	Elem* pop_front();
	Elem* pop_back();
	void push_front(Elem* el);
	void push_front(int key);
	void push_back(Elem* el);
	void push_back(int key);
};
