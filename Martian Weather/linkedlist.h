#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "weatherdata.h"
#include <iostream>

using std::cout;
using std::endl;

struct node
{
	weatherdata data_m;
	node * next_m;
	node(int timestamp = 0, double temperature = 0, double windspeed = 0, node * next = nullptr)
		:data_m(timestamp, temperature, windspeed), next_m(next) {}
};

class linkedlist
{
public:
	

	// ctor & dtor
	linkedlist();
	~linkedlist();

	// methods
	void add(int timestamp, double temperature, double windspeed);
	void printNode();

private:
	node * head_m;
};

#endif