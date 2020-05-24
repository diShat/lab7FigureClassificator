#pragma once
#include "IsoscelesTriangle.h"
class EquilateralTriangle : public IsoscelesTriangle
{
public:
	EquilateralTriangle(vector<Point> p)
	{
		if (p.size() != 3) { throw p; }
		this->vertexArray = p;
	};

	static bool checkProperties(vector<Point>& p)
	{
		Segment s1(p[0], p[1]), s2(p[1], p[2]), s3(p[2], p[0]);
		if (s1.getLength() == s2.getLength() == s3.getLength()) return true;
		else return false;
	};
	virtual string getName() { return "Equilateral triangle"; };
};