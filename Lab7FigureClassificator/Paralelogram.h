#pragma once
#include "Trapezoid.h"
class Paralelogram : public Trapezoid
{
public:
	Paralelogram() {};
	Paralelogram(Point a1, Point a2, Point a3, Point a4)
	{
		this->vertex1 = a1;
		this->vertex2 = a2;
		this->vertex3 = a3;
		this->vertex4 = a4;
	};

	static bool checkProperties(vector<Point>& p)
	{
		Segment s1(p[0], p[1]), s2(p[1], p[2]), s3(p[2], p[3]), s4(p[3], p[0]);

		if (Quadrilateral::checkProperties(p) && Segment::isParallel(s1, s3) && Segment::isParallel(s2, s4)) return true;
		else return false;
	};
};