#pragma once
#include "AreableFigure.h"
#include "Point.h"
#include <vector>

const float pi = 3.14159265359;

class Circumference : public AreableFigure
{
public:
	Circumference() {};
	Circumference(Point a, vector<Point> r);
	Point getCenter() { return this->centerPoint; };
	virtual float getLength() { return 0; };
	virtual float getArea() { return 0; };
	static bool checkProperties(Point& a, vector<Point>& rad) {};

protected:
	Point centerPoint;
	vector<Point> radiusPointArray;
};