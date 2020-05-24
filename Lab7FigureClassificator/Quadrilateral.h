#pragma once
#include "Polygon.h"
class Quadrilateral : public Polygon
{
public:
	Quadrilateral() {};
	Quadrilateral(vector<Point> p)
	{
			if (p.size() != 4) { throw p; }
			this->vertexArray = p;
	};

	static bool checkProperties(vector<Point>& p)
	{
		if (p.size() == 4) return true;
		else return false;
	};

	virtual string getName() { return "Quadrilateral"; };

};

