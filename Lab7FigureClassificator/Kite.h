#pragma once
#include "Quadrilateral.h"
class Kite : virtual public Quadrilateral
{
public:
	Kite() {};
	Kite(vector<Point> p)
	{
		if (p.size() != 4) { throw p; }
		this->vertexArray = p;
	};

	static bool checkProperties(vector<Point>& p)
	{
		Segment d1(p[0], p[2]), d2(p[1], p[3]);
		if (Quadrilateral::checkProperties(p) && Segment::isPerpendicular(d1,d2)) return true;
		else return false;
	};

	virtual string getName() { return "Kite"; };
};