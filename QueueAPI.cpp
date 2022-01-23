#include "QueueAPI.h"

KoaxyClass::~KoaxyClass()
{
}

KoaxyClass::KoaxyClass()
{
}

int KoaxyClass::pushIntToQueue(int Value)
{
    this->IntQueue.push(Value);
	Value = this->IntQueue.front();
    this->IntQueue.pop(); // pop it so no conflict
    return Value;
}

int KoaxyClass::pushIntToQueuePriority(int Value)
{
    this->IntPriorityQueue.push(Value);
    this->IntPriorityQueue.pop();
    return Value;
}

std::string KoaxyClass::PushStringToQueue(std::string str)
{
    this->StrQueue.push(str);
	str = this->StrQueue.front();
    this->StrQueue.pop();
	return str;
}

std::string KoaxyClass::PushStringToPriorityQueue(std::string str)
{
    this->StrPriorityQueue.push(str);
	int size = this->StrPriorityQueue.size();
	printf("the sizeof the string is: %i\nstr is (Priority Queue) %s \nsizeof queue is: %i\n", str.size(), str.c_str(), size);
	this->StrPriorityQueue.pop();
	return str;
}

void KoaxyClass::ClearStringQueue()
{
	this->StrPriorityQueue.pop();
}
