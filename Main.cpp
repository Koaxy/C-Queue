#include "QueueAPI.h"

KoaxyClass* QueueAPI = NULL;

int main(){
  
    QueueAPI = new KoaxyClass();
  
  
  	QueueAPI->PriorityBoolQueue_Impl(false);
}
