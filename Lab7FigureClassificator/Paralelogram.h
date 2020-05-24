#pragma once
#include "Trapezoid.h"
class Paralelogram : public Trapezoid
{
public:
	Paralelogram() {};
	Paralelogram(vector<Point> p)
	{
		if (p.size() != 4) { throw p; }
		this->vertexArray = p;
	};

	static bool checkProperties(vector<Point>& p)
	{
		Segment s1(p[0], p[1]), s2(p[1], p[2]), s3(p[2], p[3]), s4(p[3], p[0]);

		if (Quadrilateral::checkProperties(p) && Segment::isParallel(s1, s3) && Segment::isParallel(s2, s4)) return true;
		else return false;
	};

	virtual string getName() { return "Paralelogram"; };
};