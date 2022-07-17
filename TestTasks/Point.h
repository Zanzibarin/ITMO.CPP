//Тестовое задание 3
#pragma once

class Point
{
	friend ostream& operator<< (ostream&, const Point&);
	friend Point& operator+(const Point&, const Point&);
	friend Point& operator+(const Point&, const int&);
private:
	int x;
	int y;
public:
	Point() {}
	Point(int x, int y) : x(x), y(y) {}

	Point& operator+=(const Point& point2) {
		x += point2.x;
		y += point2.y;
		return *this;
	}

};

ostream& operator<< (ostream& out, const Point& point)
{
	out << "(" << point.x << ", " << point.y << ")" << endl;
	return out;
}
Point& operator+(const Point& point1, const Point& point2) {
	Point sumPoints;
	sumPoints.x = point1.x + point2.x;
	sumPoints.y = point1.y + point2.y;
	return sumPoints;
}

Point& operator+(const Point& point1, const int& d) {
	Point sumPoints;
	sumPoints.x = point1.x + d;
	sumPoints.y = point1.y + d;
	return sumPoints;
}