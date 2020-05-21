#pragma once
#include "AreableFigure.h"
#include "Point.h"
#include <vector>

const float pi = 3.14159265359;

class Circumference : public AreableFigure
{
public:
	Circumference() {};
	Circumference(Point a, vector<float> r);
	virtual float getLength() { return 0; };
	virtual float getArea() { return 0; };
protected:
	Point centerPoint;
	vector<float> radiusArray;
};