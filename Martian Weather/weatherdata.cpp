#include "weatherdata.h"

weatherdata::weatherdata(int timestamp, double temperature, double windspeed)
	:timestamp_m(timestamp), temperature_m(temperature), windspeed_m(windspeed) {}

weatherdata::weatherdata(const weatherdata & copy)
	:timestamp_m(copy.timestamp_m), temperature_m(copy.temperature_m),
	windspeed_m(copy.windspeed_m) {}

weatherdata::~weatherdata()
{
	timestamp_m = 0;
	temperature_m = 0;
	windspeed_m = 0;
}

weatherdata & weatherdata::operator=(const weatherdata & rhs)
{
	timestamp_m = rhs.temperature_m;
	temperature_m = rhs.temperature_m;
	windspeed_m = rhs.windspeed_m;
}

const int weatherdata::getTimestamp() const
{return timestamp_m;}

const double weatherdata::getTemperature() const
{return temperature_m;}

const double weatherdata::getWindspeed() const
{return windspeed_m;}
