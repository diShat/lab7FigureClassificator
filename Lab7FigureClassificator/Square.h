#pragma once
#include "Rhombus.h"
#include "Rectangle.h"
class Square : public Rhombus, public Rectangle
{
public:
	Square(Point a1, Point a2, Point a3, Point a4)
	{
		this->Quadrilateral::vertex1 = a1;
		this->Quadrilateral::vertex2 = a2;
		this->Quadrilateral::vertex3 = a3;
		this->Quadrilateral::vertex4 = a4;
	};
	Square(vector<Point> p)
	{
		this->Quadrilateral::vertexArray = p;
	};

	static bool checkProperties(vector<Point>& p)
	{
		Segment s1(p[0], p[1]), s2(p[1], p[2]), s3(p[2], p[3]), s4(p[3], p[0]);

		if (Rectangle::checkProperties(p) && Rhombus::checkProperties(p)) return true;
		else return false;
	};
};