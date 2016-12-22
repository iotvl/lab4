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
				cin >> radius;
				return 0;
			}
			double Square()
			{
				return 3.14*radius*radius;
			}
		private:
			int radius;
		};
		class Triangle : public TwoDimensionalFigures
		{
		public:
			int InputSpecifications()
			{
				cout << "Enter side: ";
				cin >> side;
				cout << "Enter height: ";
				cin >> height;
				return 0;
			}
			double Square()
			{
				return 0.5*side*height;
			}
		private:
			int side, height;
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
				cin >> radius;
				cout << "Enter height: ";
				cin >> height;
				return 0;
			}
			double Square()
			{
				return 3.14*radius*radius;
			}
			double Volume()
			{
				return 3.14*radius*radius*height;
			}
		private:
			int radius, height;
		};

		class Sphere : public ThreeDimensionalFigures
		{
		public:
			int InputSpecifications()
			{
				cout << "Enter radius: ";
				cin >> radius;
				return 0;
			}
			double Square()
			{
				return 4 * 3.14*radius*radius;
			}

			double Volume()
			{
				return 4 / 3 * 3.14*radius*radius*radius;
			}
		private:
			int radius;
		};

		class Cone : public ThreeDimensionalFigures
		{
		public:
			int InputSpecifications()
			{
				cout << "Enter radius: ";
				cin >> radius;
				cout << "Enter height: ";
				cin >> height;
				return 0;
			}
			double Square()
			{
				return 3.14*radius*radius;
			}
			double Volume()
			{
				return 3.14 / 3 * radius*radius*height;
			}
		private:
			int radius, height;
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
