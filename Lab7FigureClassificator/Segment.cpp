#include "Segment.h"
#include "Segment.h"

Segment::Segment(Point a1, Point a2)
{
	this->vertex1 = a1;
	this->vertex2 = a2;
}

float Segment::getLength()
{
	return this->vertex1.distanceFrom(this->vertex2);
}

bool Segment::isParallel(Segment& a, Segment& b)
{
	Point aVect(a.getA().getX() - a.getB().getX(), a.getA().getY() - a.getB().getY());
	Point bVect(b.getA().getX() - b.getB().getX(), b.getA().getY() - b.getB().getY());	//vectors with coordinates as (x,y)
	
	if (aVect.getX() != 0)
	{
		float n = bVect.getX() / aVect.getX();
		if (n * aVect.getX() == bVect.getX() && n * aVect.getY() == bVect.getY()) { return true; }
		else { return false; }
	}
	if (aVect.getY() != 0)
	{
		float n = bVect.getY() / aVect.getY();
		if (n * aVect.getX() == bVect.getX() && n * aVect.getY() == bVect.getY()) { return true; }
		else { return false; }
	}
	else return false;

	//if (aVect.getX() * bVect.getY() - aVect.getY() * bVect.getX() == 0) return true;
	//else return false;
}

bool Segment::isPerpendicular(Segment& a, Segment& b)
{
	Point aVect(a.getA().getX() - a.getB().getX(), a.getA().getY() - a.getB().getY());
	Point bVect(b.getA().getX() - b.getB().getX(), b.getA().getY() - b.getB().getY());	//vectors with coordinates as (x,y)

	if (aVect.getX() * bVect.getX() + aVect.getY() * bVect.getY() == 0) return true;
	else return false;
}

float Segment::getAngle(Segment& a, Segment& b)
{
	Point aVect(a.getA().getX() - a.getB().getX(), a.getA().getY() - a.getB().getY());
	Point bVect(b.getA().getX() - b.getB().getX(), b.getA().getY() - b.getB().getY());	//vectors with coordinates as (x,y)

	float productVect = aVect.getX() * bVect.getX() + aVect.getY() * bVect.getY();
	float magnitudeA = sqrt(pow(aVect.getX(), 2) + pow(aVect.getY(), 2));
	float magnitudeB = sqrt(pow(bVect.getX(), 2) + pow(bVect.getY(), 2));

	float cosAB = abs(productVect/(magnitudeA*magnitudeB));

	return acos(cosAB);
}

Point Segment::getA()
{
	return this->vertex1;
}

Point Segment::getB()
{
	return this->vertex2;
}


