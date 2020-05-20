#include "Polygon.h"

Polygon::Polygon(vector<Point> p)
{
	this->vertexArray = p;
}

vector<Point> Polygon::getPoints()
{
	return this->vertexArray;
}

float Polygon::getPerimeter()
{
	float per = 0;
	for (int i = 0; i < this->vertexArray.size(); i++)
	{
		per += vertexArray[i].distanceFrom(vertexArray[i+1]);
	}
	per += vertexArray[vertexArray.size()].distanceFrom(vertexArray[0]);
	return per;
}

int Polygon::countVertex()
{
	return this->vertexArray.size();
}
