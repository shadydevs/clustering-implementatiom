#include <iostream>

#ifndef POINT_H
#define POINT_H

class Point
{
public:
	Point();	// Default Constructor, sets X = Y = 0
	Point(float x, float y);// Constructor. Initializes both X and Y.
	void setx(float x);		// Set X value
	void sety(float y);		// Set Y value
	void setCluster(char c);// Set cluster value
	float getx() const;		// Get X value
	float gety() const;		// Get Y value
	char getCluster() const;// Get cluster value
	void display() const;	// Display point as (X , Y)
	float distance(const Point& p) const;	// distance between current point and //another point p
private:
	float x;
	float y;
	char cluster;
};

#endif // !POINT_H
