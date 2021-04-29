#include "class_Deque.h"

Deque::Deque()
{
	head = nullptr;
	tail = nullptr;
}

Elem* Deque::pop_front()
{
	return (Queue::pop());
}

Elem* Deque::pop_back()
{
	if (head == nullptr)
		return (nullptr);
	Elem* tmp = head;

	if (head == tail)
		head = tail = nullptr;
	else
	{
		while (tmp->next != tail)
			tmp = tmp->next;
		tail = tmp;
		tmp = tmp->next;
		tail->next = nullptr;
	}
	return (tmp);
}

void Deque::push_front(Elem* el)
{
	Stack::push(el);
}

void Deque::push_front(int key)
{
	push_front(new Elem(key));
}

void Deque::push_back(Elem* el)
{
	Queue::push(el);
}

void Deque::push_back(int key)
{
	push_back(new Elem(key));
}
