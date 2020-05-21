#pragma once
#include "IsoscelesTriangle.h"
class EquilateralTriangle : public IsoscelesTriangle
{
public:
	EquilateralTriangle(Point a1, Point a2, Point a3)
	{
		this->vertex1 = a1;
		this->vertex2 = a2;
		this->vertex3 = a3;
	};

	static bool checkProperties(vector<Point>& p)
	{
		Segment s1(p[0], p[1]), s2(p[1], p[2]), s3(p[2], p[0]);
		if (s1.getLength() == s2.getLength() == s3.getLength()) return true;
		else return false;
	};
};