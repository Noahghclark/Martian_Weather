#include "linkedlist.h"

linkedlist::linkedlist()
	:head_m(head_m) {}

linkedlist::~linkedlist()
{
	node * temp = head_m->next_m;
	while (head_m->next_m != nullptr)
	{
		delete head_m;
		head_m->next_m = nullptr;
		head_m = temp;
		temp = head_m->next_m;
	}
}

void linkedlist::add(int timestamp, double temperature, double windspeed)
{
	node * temp = head_m->next_m;
	head_m = new node(timestamp, temperature, windspeed, temp);
	head_m = head_m->next_m;
	temp = nullptr;
}

void linkedlist::printNode()
{

}
