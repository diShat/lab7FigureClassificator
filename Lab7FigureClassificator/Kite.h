#pragma once
#include "Quadrilateral.h"
class Kite : virtual public Quadrilateral
{
public:
	Kite() {};
	Kite(Point a1, Point a2, Point a3, Point a4)
	{
		this->vertex1 = a1;
		this->vertex2 = a2;
		this->vertex3 = a3;
		this->vertex4 = a4;
	};

	static bool checkProperties(vector<Point>& p)
	{
		Segment d1(p[0], p[2]), d2(p[1], p[3]);
		if (Quadrilateral::checkProperties(p) && Segment::isPerpendicular(d1,d2)) return true;
		else return false;
	};
};