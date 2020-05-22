#include <iostream>
#include <iomanip>
#include <vector>
#include "EquilateralTriangle.h"
#include "RightIsoscelesTriangle.h"
#include "Square.h"
#include "Circle.h"
#include "Ellipce.h"

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

Polygon PolygonCreator(vector<Point> p)
{
	return Polygon(p);
}
Circumference CircumferenceCreator(Point a, vector<float> rad)
{
	return Circumference(a, rad);
}

int main()
{
	cout << "------Welcome to the Figure Classificator!------" << endl;
	cout << "1)Create a polygon.\n2)Create a circumference.\n0)Exit." << endl;
	
	int intChoise = -1;
	getChoise(intChoise);

	while (intChoise > 0)
	{
		vector<Point> vect;
		vect.push_back(Point(7, 0));
		vect.push_back(Point(10, 2));
		vect.push_back(Point(8, 5));
		vect.push_back(Point(5, 3));
		Segment s1(vect[0], vect[1]), s2(vect[1], vect[2]), s3(vect[2], vect[3]), s4(vect[3], vect[0]);

		switch (intChoise)
		{
		case 1:
			cout << "Polygon was created!" << endl;
		
			cout << Segment::isParallel(s2, s4) << endl;

			cout << Square::checkProperties(vect) << endl;

			break;
		case 2:
			cout << "Circumference was created!" << endl;
			break;
		default:
			cout << "No such option!" << endl;
			break;
		}
		getChoise(intChoise);
	}
}