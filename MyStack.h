#pragma once
#include <iostream>
using namespace std;

template<typename T>
class MyStack
{
	enum { EMPTY = -1, FULL = 20 };
	T mass[FULL];
	int top;
public:
	MyStack();
	void Push(T c);
	T Pop();
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
	void Show();
};

template<typename T>
MyStack<T>::MyStack()
{
	top = EMPTY;
}

template<typename T>
void MyStack<T>::Push(T c)
{
	if (!IsFull())
		mass[++top] = c;
}

template<typename T>
T MyStack<T>::Pop()
{
	if (!IsEmpty())
		return mass[top--];
	else
		return 0;
}

template<typename T>
void MyStack<T>::Clear()
{
	top = EMPTY;
}

template<typename T>
bool MyStack<T>::IsEmpty()
{
	return top == EMPTY;
}

template<typename T>
bool MyStack<T>::IsFull()
{
	return top == FULL;
}

template<typename T>
int MyStack<T>::GetCount()
{
	return top + 1;
}

template<typename T>
void MyStack<T>::Show()
{
	for (int i = 0; i <= top; i++)
	{
		cout << mass[i] << "\t";
	}
}
