#pragma once
#include "Polygon.h"


class Triangle : public Polygon
{
public:
	Triangle() {};
	Triangle(vector<Point> p)
	{
		if (p.size() != 3) { throw p; }
		this->vertexArray = p;
	};
	static bool checkProperties(vector<Point>& p)
	{
		if (p.size() == 3) return true;
		else return false;
	};
	virtual string getName() { return "Triangle"; };
};