#pragma once
#include "AreableFigure.h"
#include "Point.h"
#include <vector>

const float pi = 3.14159265359;

class Circumference : public AreableFigure
{
public:
	Circumference(Point a, vector<float> r);
	virtual float getLength() {};
	virtual float getArea() {};
protected:
	Point centerPoint;
	vector<float> radiusArray;
};

class Circumference
{
};

