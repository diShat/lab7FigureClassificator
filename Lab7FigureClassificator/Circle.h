#pragma once
#include "Circumference.h"

class Circle : public Circumference
{
public:
	Circle(Point a, vector<Point> r)
	{
		this->centerPoint = a;
		this->radiusPointArray = r;
	};

	float getLength() override
	{
		return 2 * pi * radiusPointArray[0].distanceFrom(centerPoint);
	}

	float getArea() override
	{
		return pi * radiusPointArray[0].distanceFrom(centerPoint) * radiusPointArray[0].distanceFrom(centerPoint);
	};

	static bool checkProperties(Point& a, vector<Point>& rad) 
	{
		if (rad.size() == 1) { return true; }
		else
		{
			bool k = true;
			for (int i = 0; i < rad.size(); i++)
			{
				if (rad[0].distanceFrom(a)!=rad[i].distanceFrom(a))
				{
					k = false;
					break;
				}
			}
			return k;
		}
	};
};