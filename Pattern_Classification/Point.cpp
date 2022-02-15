#include "Point.h"

Point::Point()
{
	x = 0;
	y = 0;
}

Point::Point(float X, float Y)
{
	this->x = X;
	this->y = Y;
}

void Point::setx(float x)
{
	this->x = x;
}

void Point::sety(float y)
{
	this->y = y;
}

void Point::setCluster(char c)
{
	cluster = c;
}

float Point::getx() const
{
	return x;
}

float Point::gety() const
{
	return y;
}

char Point::getCluster() const
{
	return cluster;
}

void Point::display() const
{
	std::cout << "(" << x << ", " << y << ")";
}

float Point::distance(const Point& p) const
{
	float D = 0;	//D = sqrt((x1-x2)^2+(y1-y2)^2)
	
	D = sqrt(((x - p.x) * (x - p.x)) + ((y - p.y) * (y - p.y)));
	
	return D;
}
