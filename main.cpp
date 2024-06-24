#include <iostream>
#include "MyStack.h"
using namespace std;

int main()
{
	MyStack<double> ST;
	ST.Push(43.6);
	ST.Push(-11.76);
	ST.Push(34.05);
	ST.Push(2.0032);
	ST.Show();
	ST.Pop();
	ST.Pop();
	cout << endl;
	ST.Show();
}