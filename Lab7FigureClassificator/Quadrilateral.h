#pragma once
#include "Polygon.h"
class Quadrilateral : public Polygon
{
public:
	Quadrilateral() {};
	Quadrilateral(Point a1, Point a2, Point a3, Point a4)
	{
		this->vertex1 = a1;
		this->vertex2 = a2;
		this->vertex3 = a3;
		this->vertex4 = a4;
	};
protected:
	Point vertex1;
	Point vertex2;
	Point vertex3;
	Point vertex4;
};

