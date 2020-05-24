#pragma once
#include "AreableFigure.h"
#include "Point.h"
#include "Segment.h"
#include <vector>

class Polygon : public AreableFigure
{
public:
	Polygon() {};
	Polygon(vector<Point> p);
	vector<Point> getPoints();
	float getPerimeter();	
	virtual float getArea() { return 0; };
	virtual string getName() { return "Polygon"; };
	int countVertex();
	static bool checkProperties(vector<Point>& p) {};
protected:
	vector<Point> vertexArray;
};
