
#pragma once
#include <Windows.h>
#include <memoryapi.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include <queue>

class KoaxyClass
{
public:
	~KoaxyClass();
	KoaxyClass();
	int pushIntToQueue(int Value);
	int pushIntToQueuePriority(int Value);
	std::string PushStringToQueue(std::string str);
	std::string PushStringToPriorityQueue(std::string str);
	void ClearStringQueue();
private:
	std::queue<std::string> StrQueue;
	std::priority_queue<std::string> StrPriorityQueue;
	std::queue<int> IntQueue;
	std::priority_queue<int> IntPriorityQueue;
};
