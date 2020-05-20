#pragma once
#include "IsoscelesTriangle.h"
#include "RightTriangle.h"
class RightIsoscelesTriangle : public IsoscelesTriangle, public RightTriangle
{
public:
	RightIsoscelesTriangle(Point a1, Point a2, Point a3)
	{
		this->vertex1 = a1;
		this->vertex2 = a2;
		this->vertex3 = a3;
	};
};