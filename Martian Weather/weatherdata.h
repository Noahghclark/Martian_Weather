#ifndef WEATHERDATA_H
#define WEATHERDATA_H
class weatherdata
{
public:
	// ctor & dtor
	weatherdata(int timestamp = 0, double temperature = 0, double windspeed = 0);
	weatherdata(const weatherdata & copy);
	~weatherdata();

	// operators
	weatherdata & operator=(const weatherdata & rhs);

	// methods
	const int getTimestamp() const;
	const double getTemperature() const;
	const double getWindspeed() const;

private:
	int timestamp_m;
	double temperature_m;
	double windspeed_m;
};

#endif