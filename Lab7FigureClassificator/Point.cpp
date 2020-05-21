#include "Point.h"

Point::Point(float a, float b)
{
	this->x = a;
	this->y = b;
}

float Point::getX()
{
	return this->x;
}

float Point::getY()
{
	return this->y;
}

float Point::distanceFrom(Point a)
{
	return sqrt(pow(this->x - a.getX(), 2) + pow(this->y - a.getY(), 2));
}

float Point::diatanceFrom(float a, float b)
{
	return sqrt(pow(this->x - a, 2) + pow(this->y - b, 2));
}
