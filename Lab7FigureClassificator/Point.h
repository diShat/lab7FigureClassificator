#pragma once
#include "Figure.h"
class Point : public Figure
{
public:
	Point();
	Point(float a, float b);
	float getX();
	float getY();

	float distanceFrom(Point a);
	float diatanceFrom(float a, float b);
protected:
	float x;
	float y;
};

class Point
{
};

