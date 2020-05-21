#pragma once
#include "Circumference.h"

class Circle : public Circumference
{
public:
	Circle(Point a, vector<float> r)
	{
		this->centerPoint = a;
		this->radiusArray = r;
	};

	Circle(Point a, float r)
	{
		this->centerPoint = a;
		this->radius = r;
	};

	float getLength() override
	{
		return 2 * pi * radius;
	}

	float getArea() override
	{
		return pi * radius * radius;
	};

protected:
	float radius;
};