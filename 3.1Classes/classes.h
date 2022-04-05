#include <math.h>
#include <string>
using namespace std::string_literals;
//A controller class for the graphical environment. This class will be responsible for
//initializing the graphical environment, destroying the environment, setting the dimensions
//of the graphical window and etc.

class Controller
{
private:
	double dimensions{0};
public:
	Controller(){}
	Controller(double x) :dimensions{ x } {}
	void setDimensions(double d) { dimensions = d; }
	double getDimensions() { return dimensions; }
};
//A point class. This class represents the 2d coordinates of a point.
class Point
{
	double x{ 0 }, y{ 0 };
public:
	Point(){}
	Point(double x, double y) :x{ x }, y{ y }{}
	void setX(double x) { this->x = x; }
	void setY(double y) { this->y = y; }
	double getX() { return x; }
	double getY() { return y; }
};
/*A color class. This class represents the colors that can be used in the graphical
environment. A color class includes 3 components: R for red, G for green and B for blue.
You may add a member of "color_t" type to the class. However, if you do so, you need to
add converter functions for converting "RGB" and "color_t".*/
class Color
{
	std::string borderColor{"无颜色"};
	std::string fillColor{ "无颜色" };
public:
	Color(){}
	Color(char borderColor, char fillColor)
	{
		if (borderColor == 'R') this->borderColor = "Red";
		else if (borderColor == 'G')this->borderColor = "Green";
		else if (borderColor == 'B')this->borderColor = "Blue";
		else if (borderColor == '0')this->borderColor = "无颜色";
		else this->borderColor = "错误";
		if (fillColor == 'R') this->borderColor = "Red";
		else if (fillColor == 'G')this->borderColor = "Green";
		else if (fillColor == 'B')this->borderColor = "Blue";
		else if (fillColor == '0')this->borderColor = "无颜色";
		else this->borderColor = "错误";
	}
	void setBorderColor(std::string x)
	{
		if (x == "R") borderColor= "Red";
		else if (x == "G")borderColor = "Green";
		else if (x == "B")borderColor = "Blue";
		else if (x == "0")borderColor = "无颜色";
		else borderColor = "错误";
	}
	std::string getBordColor()
	{
		return borderColor;
	}
	void setFillColor(std::string x)
	{
		if (x == "R") fillColor = "Red";
		else if (x == "G")fillColor = "Green";
		else if (x == "B")fillColor = "Blue";
		else if (x == "0")fillColor = "无颜色";
		else fillColor = "错误";
	}
	std::string getFillColor(std::string x)
	{
		return fillColor;
	}
};
/*A circle class. There should be at least 3 members in this class: the coordinates of the
center, the radius and the colors.*/
class Circle
{
	Point center{0,0};
	double radius{1};
	Color color;
	bool filled{false};
public:
	Circle() {};
	Circle(Point center, double radius, Color color, bool filled) :
		center{ center }, radius{ radius }, color{ color }, filled{ filled } {}
	void setCenter(Point x)
	{
		center = x;
	}
	Point getCenter()
	{
		return center;
	}
	void setRadius(double x)
	{
		radius = x;
	}
	double getRadius()
	{
		return radius;
	}
	void setColor(Color x)
	{
		color = x;
	}
	Color getColor()
	{
		return color;
	}
	void isFilled(bool b)
	{
		filled = b;
	}
	bool getFilled()
	{
		return filled;
	}
};
/* A rectangle class. There must be at least two categories of members in this class: the
coordinates which decide the location and size of the rectangle, the colors.*/
class Rectangle
{
	Point center;
	Color color;
	bool filled{false};
public:
	Rectangle(){}
	Rectangle(Point center, Color color, bool filled) :center{ center }, color{ color }, filled{ filled }{}
	void setCenter(Point x)
	{
		center = x;
	}
	Point getCenter()
	{
		return center;
	}
	void setColor(Color x)
	{
		color = x;
	}
	Color getColor()
	{
		return color;
	}
	void isFilled(bool b)
	{
		filled = b;
	}
	bool getFilled()
	{
		return filled;
	}
};
//A triangle class. You can determine the details of the class
class Triangle
{
	double a{ 1 }, b{ 1 }, c{ 1 };
	Color color;
	bool filled{false};
public:
	Triangle() {}
	Triangle(double a, double b, double c, Color color, bool filled) :
		a{ a }, b{ b }, c{ c }, color{ color }, filled{ filled } {}
	void setAbc(double a,double b,double c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	double getA() { return a; }
	double getB() { return b; }
	double getC() { return c; }
	void setColor(Color x)
	{
		color = x;
	}
	Color getColor()
	{
		return color;
	}
	void isFilled(bool b)
	{
		filled = b;
	}
	bool getFilled()
	{
		return filled;
	}
};
//Other classes as needed. For example, a line class, a polygon class, an arc class and etc.
class Line
{
	Point a, b;
	double lineLong{0};
public:
	Line() {}
	Line(Point a, Point b, double lineLong) :a{ a }, b{ b },
		lineLong{ sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2)) } {}
	void setAb(Point a,Point b)
	{
		this->a = a;
		this->b = b;
	}
	Point getA() { return a; }
	Point getB() { return b; }
	void setLine(double x)
	{
		lineLong = x;
	}
	double getLine() { return lineLong; }
};
