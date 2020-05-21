#pragma once
#include "Triangle.h"

class RightTriangle : virtual public Triangle
{
public:
	RightTriangle() {};
	RightTriangle(Point a1, Point a2, Point a3)
	{
		this->vertex1 = a1;
		this->vertex2 = a2;
		this->vertex3 = a3;
	};
	static bool checkProperties(vector<Point>& p)
	{
		Segment s1(p[0], p[1]), s2(p[1], p[2]), s3(p[2], p[0]);
		if (Segment::isPerpendicular(s1,s2) || Segment::isPerpendicular(s2, s3) || Segment::isPerpendicular(s3, s1)) return true;
		else return false;
	};
};