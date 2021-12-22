#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;

public:

	Point(int valueX, int valueY)
	{
		x = valueX;
		y = valueY;
	}

	void Right(int step)
	{
		x += step;
	}

	void Left(int step)
	{
		x -= step;
	}

	void Up(int step)
	{
		y += step;
	}

	void Down(int step)
	{
		y -= step;
	}

	int GetX()
	{
		return x;
	}

	int GetY()
	{
		return y;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}

	void SetY(int valueY)
	{
		y = valueY;
	}

	void Print()
	{
		cout << "x = " << x << "\t y = " << y << "\n\n";
	}
};



int main()
{
	Point a(5,20);
	a.Print();
	a.Right(2);  //Перемещение точки вправо на указанное количество единиц
	a.Print();
}
