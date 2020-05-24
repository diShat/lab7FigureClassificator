#pragma once
#include "Triangle.h"

class RightTriangle : virtual public Triangle
{
public:
	RightTriangle() {};
	RightTriangle(vector<Point> p)
	{
		if (p.size() != 3) { throw p; }
		this->vertexArray = p;
	};

	static bool checkProperties(vector<Point>& p)
	{
		Segment s1(p[0], p[1]), s2(p[1], p[2]), s3(p[2], p[0]);
		if (Segment::isPerpendicular(s1,s2) || Segment::isPerpendicular(s2, s3) || Segment::isPerpendicular(s3, s1)) return true;
		else return false;
	};
	string getName() { return "Right triangle"; };
};