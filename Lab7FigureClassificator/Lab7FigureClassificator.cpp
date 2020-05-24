#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "EquilateralTriangle.h"
#include "RightIsoscelesTriangle.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

template <typename T>
void getChoise(T& choice)
{
	cout << "--Enter choice: ";
	cin >> setw(1) >> choice;

	//Error check
	while (!cin.good())
	{
		//Report problem
		cout << "ERROR: Faulty input. Try again..." << endl;

		//Clear stream
		cin.clear();
		cin.ignore(INT_MAX, '\n');

		//get input again
		cout << "--Enter choice: ";
		cin >> setw(1) >> choice;
	}

	//Clear stream
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}
vector<Point> fillFromConsole()
{
	vector<Point> vect;
	char charChoise;
	float x, y;
	cout << "--Enter point coordinates: " << endl;
	
	while (!(cin >> x >> y))
	{
		//Report error
		cout << "ERROR: Faulty input. Try again...";
		//Clear stream
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}

	vect.push_back(Point(x, y));

	cout << "Want to enter another point? (y/n): ";
	getChoise(charChoise);
	while (charChoise!='n')
	{
		switch (charChoise)
		{
		case 'y':
			cout << "--Enter point coordinates: " << endl;

			while (!(cin >> x >> y))
			{
				//Report error
				cout << "ERROR: Faulty input. Try again...";
				//Clear stream
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
			
			vect.push_back(Point(x, y));
			break;
		default:
			cout << "No such option!" << endl;
			break;
		}
		cout << "Want to enter another point? (y/n): ";
		getChoise(charChoise);
	}
	cout << "Vector was created!" << vect.size() << endl;
	return vect;
}

Polygon* PolygonCreator(vector<Point> p)
{
	//checking polygon properties
	try 
	{
		if (p.size() < 3) { throw p; }
		if (p.size() == 3)
		{
			if (EquilateralTriangle::checkProperties(p)) { return &EquilateralTriangle(p); }
			if (RightIsoscelesTriangle::checkProperties(p)) { return &RightIsoscelesTriangle(p); }
			if (IsoscelesTriangle::checkProperties(p)) { return &IsoscelesTriangle(p); }
			if (RightTriangle::checkProperties(p)) { return &RightTriangle(p); }
			return &Triangle(p);
		}
		if (p.size() == 4)
		{
			if (Square::checkProperties(p)) { return &Square(p); }
			if (Rhombus::checkProperties(p)) { return &Rhombus(p); }
			if (Rectangle::checkProperties(p)) { return &Rectangle(p); }
			if (Paralelogram::checkProperties(p)) { return &Paralelogram(p); }
			if (IsoscelesTrapezoid::checkProperties(p)) { return &IsoscelesTrapezoid(p); }
			if (Kite::checkProperties(p)) { return &Kite(p); }
			if (Trapezoid::checkProperties(p)) { return &Trapezoid(p); }
			return &Quadrilateral(p);
		}
		else return &Polygon(p);
	}
	catch (vector<Point> v)
	{
		cout << "ERROR: Can't create object. Inappropriate variable was given." << endl;
	}
}
Circumference* CircumferenceCreator(Point a, vector<Point> rad)
{
	if (Circle::checkProperties(a, rad)) { return &Circle(a, rad); }
	return &Circumference(a, rad);
}

int main()
{
	cout << "------Welcome to the Figure Classificator!------" << endl;
	cout << "1)Create a polygon.\n2)Create a circumference.\n0)Exit." << endl;
	
	int intChoise = -1;
	getChoise(intChoise);

	while (intChoise > 0)
	{
		vector<Point> v;
		Point a;
		float x, y;
		Polygon* poly;
		Circumference* circ;
		switch (intChoise)
		{
		case 1:
			v = fillFromConsole();
			poly = PolygonCreator(v);
			cout << "You created " << (*poly).getName() << "." << endl;
			break;
		case 2:
			cout << "Enter center point coordinates: ";

			while (!(cin >> x >> y))
			{
				//Report error
				cout << "ERROR: Faulty input. Try again...";
				//Clear stream
				cin.clear();
				cin.ignore(INT_MAX, '\n');
			}
			a = Point(x, y);
			v = fillFromConsole();
			circ = CircumferenceCreator(a, v);
			cout << "You created " << (*circ).getName() << "." << endl;
			break;
		default:
			cout << "No such option!" << endl;
			break;
		}

		cout << "1)Create a polygon.\n2)Create a circumference.\n0)Exit." << endl;
		
		getChoise(intChoise);
	}

}