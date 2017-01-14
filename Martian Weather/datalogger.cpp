#include "datalogger.h"

datalogger::datalogger() :count_m(0){}

datalogger::~datalogger() 
{
	count_m = 0;
}

void datalogger::addData(int timestamp, double temperature, double windspeed)
{
	list_m.add(timestamp, temperature, windspeed);
	count_m++;
}

void datalogger::printReport() const
{
	cout << "-- Data Report --";
	cout << "Time range:\t\t";
	cout << "Number of Entries:\t\t" << count_m << endl;
	cout << "-----------------------------------------------------\n";
	cout << "TEMPERATURE";
	cout << "Min temperature:\t\t";
	cout << "Max temperature:\t\t";
	cout << "Top 1% temperatures";
	cout << "Bottom 1% temperatures";
	cout << "-----------------------------------------------------\n";
	cout << "WINDSPEED";
	cout << "Min windspeed:\t\t";
	cout << "Max windspeed:\t\t";
	cout << "Top 1% windspeeds";
	cout << "Bottom 1% windspeeds";
}
