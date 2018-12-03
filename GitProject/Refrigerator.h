#pragma once


class Refrigerator
{
private:
	int numBananas; //keeps track of the amount of bananas in the refrigerator
public:
	Refrigerator(); //default constructor
	Refrigerator(int); //the banana constructor
	int getBananas();
	void setBananas(int);
	~Refrigerator();
};

