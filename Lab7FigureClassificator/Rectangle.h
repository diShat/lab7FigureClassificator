#pragma once
#include "Paralelogram.h"
#include "IsoscelesTrapezoid.h"
class Rectangle : public Paralelogram, public IsoscelesTrapezoid
{
public:
	Rectangle() {};
	Rectangle(Point a1, Point a2, Point a3, Point a4)
	{
		this->vertex1 = a1;
		this->vertex2 = a2;
		this->vertex3 = a3;
		this->vertex4 = a4;
	};
};
