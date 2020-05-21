#pragma once
#include "Figure.h"
#include "Point.h"
class Segment : public Figure
{
public:
	Segment() {};
	Segment(Point a1, Point a2);
	float getLength();
	static bool isParallel(Segment& a, Segment& b);
	static bool isPerpendicular(Segment& a, Segment& b);
	static float getAngle(Segment& a, Segment& b);
	Point getA();
	Point getB();
private:
	Point vertex1;
	Point vertex2;
};