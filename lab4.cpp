#include "stdafx.h"
#include <iostream>

using namespace std;

class GeometricFigures
{
public:
	virtual double Square()
	{
		return 0;
	}
	virtual int InputSpecifications()
	{
		return 0;
	}
};
class TwoDimensionalFigures : public GeometricFigures
{
public:
	virtual double Square()
	{
		return 0;
	}
	virtual int InputSpecifications()
	{
		return 0;
	}
};
class  Circle : public TwoDimensionalFigures
{
public:
	int InputSpecifications()
	{
		cout << "Enter radius: ";
		cin >> r;
		return 0;
	}
	double Square()
	{
		return 3.14*r*r;
	}
private:
	int r;
};
class Triangle : public TwoDimensionalFigures
{
public:
	int InputSpecifications()
	{
		cout << "Enter side: ";
		cin >> a;
		cout << "Enter height: ";
		cin >> h;
		return 0;
	}
	double Square()
	{
		return 0.5*a*h;
	}
private:
	int a, h;
};
class ThreeDimensionalFigures : public GeometricFigures
{
public:
	virtual int InputSpecifications()
	{
		return 0;
	}
	virtual double Square()
	{
		return 0;
	}
	virtual double Volume()
	{
		return 0;
	}
};

class Cylinder : public ThreeDimensionalFigures
{
public:
	int InputSpecifications()
	{
		cout << "Enter radius: ";
		cin >> r;
		cout << "Enter height: ";
		cin >> h;
		return 0;
	}
	double Square()
	{
		return 3.14*r*r;
	}
	double Volume()
	{
		return 3.14*r*r*h;
	}
private:
	int r, h;
};

class Sphere : public ThreeDimensionalFigures
{
public:
	int InputSpecifications()
	{
		cout << "Enter radius: ";
		cin >> r;
		return 0;
	}
	double Square()
	{
		return 4 * 3.14*r*r;
	}

	double Volume()
	{
		return 4 / 3 * 3.14*r*r*r;
	}
private:
	int r;
};

class Cone : public ThreeDimensionalFigures
{
public:
	int InputSpecifications()
	{
		cout << "Enter radius: ";
		cin >> r;
		cout << "Enter height: ";
		cin >> h;
		return 0;
	}
	double Square()
	{
		return 3.14*r*r;
	}
	double Volume()
	{
		return 3.14 / 3 * r*r*h;
	}
private:
	int r, h;
};

int main()
{
	cout << "Choose figure:" << endl;
	cout << "1. Circle" << endl;
	cout << "2. Triangle" << endl;
	cout << "3. Cylinder" << endl;
	cout << "4. Sphera" << endl;
	cout << "5. Cone" << endl;
	int choise;
	cin >> choise;
	if (choise == 1)
	{
		TwoDimensionalFigures *pointer1 = new Circle;
		pointer1->InputSpecifications();
		cout << "Square = " << (pointer1->Square()) << endl;
	}
	else if (choise == 2)
	{
		TwoDimensionalFigures *pointer2 = new Triangle;
		pointer2->InputSpecifications();
		cout << "Square = " << (pointer2->Square()) << endl;
	}
	else if (choise == 3)
	{
		ThreeDimensionalFigures *pointer3 = new Cylinder;
		pointer3->InputSpecifications();
		cout << "Square = " << (pointer3->Square()) << endl;
		cout << "Volume = " << (pointer3->Volume()) << endl;
	}
	else if (choise == 4)
	{
		ThreeDimensionalFigures *pointer4 = new Sphere;
		pointer4->InputSpecifications();
		cout << "Square = " << (pointer4->Square()) << endl;
		cout << "Volume = " << (pointer4->Volume()) << endl;
	}
	else if (choise == 5)
	{
		ThreeDimensionalFigures *pointer5 = new Cone;
		pointer5->InputSpecifications();
		cout << "Square = " << (pointer5->Square()) << endl;
		cout << "Volume = " << (pointer5->Volume()) << endl;
	}
	else
		cout << "Wrong number" << endl;
	return 0;
}
