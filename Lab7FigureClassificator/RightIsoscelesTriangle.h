#pragma once
#include "IsoscelesTriangle.h"
#include "RightTriangle.h"
class RightIsoscelesTriangle : public IsoscelesTriangle, public RightTriangle
{
public:
	RightIsoscelesTriangle(vector<Point> p)
	{
		if (p.size() != 3) { throw p; }
		this->vertexArray = p;
	};

	static bool checkProperties(vector<Point>& p)
	{
		if (RightTriangle::checkProperties(p) && IsoscelesTriangle::checkProperties(p)) return true;
		else return false;
	};

	virtual string getName() { return "Right isosceles triangle"; };
};