#pragma once
#include "Triangle.h"
class IsoscelesTriangle : virtual public Triangle
{
public:
	IsoscelesTriangle() {};
	IsoscelesTriangle(Point a1, Point a2, Point a3)
	{
		this->vertex1 = a1;
		this->vertex2 = a2;
		this->vertex3 = a3;
	};
};