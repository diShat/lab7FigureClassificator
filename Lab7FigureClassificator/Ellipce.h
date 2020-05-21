#pragma once
#include "Circumference.h"
class Ellipce : public Circumference
{
public:
	Ellipce(Point a, vector<float> r)
	{
		this->centerPoint = a;
		this->radiusArray = r;
	};

	Ellipce(Point a, float r1, float r2)
	{
		this->centerPoint = a;
		this->radius1 = r1;
		this->radius2 = r2;
	};

	float getLength() override
	{
		return 2 * pi * sqrt(pow(radius1, 2) + pow(radius2, 2));
	}

	float getArea() override
	{
		return pi * radius1 * radius2;
	};

protected:
	float radius1;
	float radius2;
};