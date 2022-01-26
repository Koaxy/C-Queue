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


bool KoaxyClass::PushBoolToQueue(bool Bo)
{
	this->boolQueue.push(Bo);
	Bo = this->boolQueue.front();
	if (this->boolQueue.size() == 1)
	{
		this->boolQueue.pop(); // Returns the result also clears the queue
	}

	return false;
}

bool KoaxyClass::PriorityBoolQueue_Impl(bool Bo)
{
	this->PriorityBoolQueue.push(Bo);

	printf("Queue Size is: %i\n", this->PriorityBoolQueue.size());

	if (this->PriorityBoolQueue.size() == 1)
	{
		this->PriorityBoolQueue.pop(); // Returns the boolean.
		printf("Popped it! \n");
	}
	printf("Boolean: %i\n", Bo);
	return Bo;
	//this->boolQueue.push(Bo); // Pushes a bool aka TRUE or FALSE or true or false

}


