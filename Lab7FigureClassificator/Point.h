#pragma once
#include "Figure.h"
class Point : public Figure
{
public:
	Point();
	Point(float a, float b);
	~Point() {};
	float getX();
	float getY();

	float distanceFrom(Point a);
	float distanceFrom(float a, float b);
	virtual string getName() { return "Point"; };
protected:
	float x;
	float y;
};