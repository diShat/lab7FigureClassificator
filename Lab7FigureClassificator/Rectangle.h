#pragma once
#include "Paralelogram.h"
#include "IsoscelesTrapezoid.h"
class Rectangle : public Paralelogram, public IsoscelesTrapezoid
{
public:
	Rectangle() {};
	Rectangle(vector<Point> p)
	{
		if (p.size() != 4) { throw p; }
		this->vertexArray = p;
	};

	static bool checkProperties(vector<Point>& p)
	{
		Segment s1(p[0], p[1]), s2(p[1], p[2]), s3(p[2], p[3]), s4(p[3], p[0]);

		if (Paralelogram::checkProperties(p) && IsoscelesTrapezoid::checkProperties(p)) return true;
		else return false;
	};

	virtual string getName() { return "Rectangle"; };

};
