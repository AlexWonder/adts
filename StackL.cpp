#include "StackL.h"
using namespace std;

int Stack::size()
{
	return data.size();
}

void Stack::push(int val)
{
	data.insert(val,1);
}

void Stack::pop()
{
	int k = data.size();
	data.remove(k);
}

int Stack::top()
{
	int k = data.size();
	return data.get(k);
}

void Stack::clear()
{
	data.~List();
}
