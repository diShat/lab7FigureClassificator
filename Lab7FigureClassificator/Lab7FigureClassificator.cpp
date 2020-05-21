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
		switch (intChoise)
		{
		case 1:
			cout << "Polygon was created!" << endl;
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