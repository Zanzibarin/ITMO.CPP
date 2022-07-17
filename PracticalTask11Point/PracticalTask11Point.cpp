#include <iostream>
#include <math.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

class Point
{
	friend ostream& operator<< (ostream&, const Point&);
	friend bool operator<( const Point&,  const Point&);
private:
	double x;
	double y;
public:
	//Point(): x(0), y(0) {}
	Point(double x, double y) : x(x), y(y) {}

	double DistanceToCenter() const{
		return sqrt(x*x + y*y);
	}

	double DistanceTo(const Point& point) const{
		return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
	}

};

ostream& operator<< (ostream& out, const Point& point)
{
	out << "(" << point.x <<", " << point.y << ")" <<endl;
	return out;
}
bool operator<( const Point& point1,  const Point& point2) {
	if (point1.DistanceToCenter() < point2.DistanceToCenter()) return true;
	return false;
}
int main()
{
	/*Point point(0, 0);
	point.*/
	vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	sort(v.begin(), v.end()); // требуется перегрузка оператора < для
	// класса Point
	for (auto& point : v)
		std::cout << point << '\n'; // требуется перегрузка оператора << для 
		// класса Point
	return 0; 
}