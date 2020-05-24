#pragma once
#include "Kite.h"
#include "Paralelogram.h"

class Rhombus : public Kite, public Paralelogram
{
public:
	Rhombus() {};
	Rhombus(vector<Point> p)
	{
		if (p.size() != 4) { throw p; }
		this->vertexArray = p;
	};

	static bool checkProperties(vector<Point>& p)
	{
		Segment s1(p[0], p[1]), s2(p[1], p[2]), s3(p[2], p[3]), s4(p[3], p[0]);

		if (Kite::checkProperties(p) && Paralelogram::checkProperties(p)) return true;
		else return false;
	};

	virtual string getName() { return "Rhombus"; };

};