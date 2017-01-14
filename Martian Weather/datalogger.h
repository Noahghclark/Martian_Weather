#ifndef DATALOGGER_H
#define DATALOGGER_H


#include "linkedlist.h"
#include <iostream>

using std::cout;
using std::endl;

class datalogger
{
public:
	// ctor & dtor
	datalogger();
	~datalogger();

	// methods
	void addData(int timestamp, double temperature, double windspeed);
	void printReport() const;

private:
	linkedlist list_m;
	
	int count_m;
	node * minTemp;
	node * maxTemp;
	node * minWind;
	node * maxWind;
};

#endif