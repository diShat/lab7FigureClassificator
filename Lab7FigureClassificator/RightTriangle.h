#pragma once
#include "Triangle.h"
class RightTriangle : virtual public Triangle
{
public:
	RightTriangle(Point a1, Point a2, Point a3)
	{
		this->vertex1 = a1;
		this->vertex2 = a2;
		this->vertex3 = a3;
	};
};