#pragma once
#include "Polygon.h"

class Triangle : public Polygon
{
public:
	Triangle() {};
	Triangle(Point a1, Point a2, Point a3)
	{
		this->vertex1 = a1;
		this->vertex2 = a2;
		this->vertex3 = a3;
	};

protected:
	Point vertex1;
	Point vertex2;
	Point vertex3;
};