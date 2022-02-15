/*
Name: Shady Nessim	Assignment number #2 
A cluster of points in 2-D space is a collection of points with different coordinates (x,y) but  group  together  in  one  collection.  The  coordinates  (x,y)  may  represent  features  of
an  object like (weight, height). The location of the whole cluster may be represented by its Center  with  XC  and  YC  coordinates  given  by  the  averages  of  the  x-coordinates  and  
y-coordinates of the points in that cluster. Suppose we have two clusters of points (features) in  2-D  space,  cluster  A  and  cluster  B;  they  will  be  separable  if  none  of  the  points 
in  A  belongs to B and vice versa
*/
#include "Point.h"
#include <time.h>

Point center(Point C[], int n);		//returns center point of a cluster
char closest(Point p, Point A[], int a, Point B[], int b);	//returns the closest cluster from A and B to p as a pointer to the array. a and b are sizes of the arrays
int random(int x, int y);	//random number generator

const int SIZE = 100;

int main()
{
	srand(time(0));

	//Generate 100 random points for cluster A (70 -> 90) and Cluster B (20 -> 40)
	Point A[SIZE], B[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		A[i].setx(random(70, 90));
		A[i].sety(random(70, 90));

		B[i].setx(random(20, 40));
		B[i].sety(random(20, 40));
	}

	std::cout << "center of A: \n";
	center(A, SIZE).display();
	std::cout << std::endl;
	std::cout << "center of B: \n";
	center(B, SIZE).display();
	std::cout << std::endl << std::endl;

	//Generate 20 random points (5 -> 100)
	Point p[20];
	for (int i = 0; i < 20; i++)
	{
		p[i].setx(random(5, 100));
		p[i].sety(random(5, 100));
		
		p[i].display();
		//output to which cluster (A or B) it should belong
		std::cout << " => " << closest(p[i], A, SIZE, B, SIZE) << std::endl << std::endl;
	}
	
	return 0;
}

Point center(Point C[], int n)
{
	Point CP;	//center point
	float sumX = 0, sumY = 0;

	//calculate sum of all points
	for (int i = 0; i < n; i++)
	{
		sumX += C[i].getx();
		sumY += C[i].gety();
	}
	
	CP.setx(sumX / n);
	CP.sety(sumY / n);

	return CP;
}

char closest(Point p, Point A[], int a, Point B[], int b)
{
	Point ACP;	//A's center point
	Point BCP;	//B's center point

	ACP = center(A, a);
	BCP = center(B, b);

	float distToA = p.distance(ACP);
	float distToB = p.distance(BCP);

	if (distToA > distToB)
		return 'B';
	else if (distToA == distToB)
		return '0';		//if both are equal print to 0 so we know theyre equal
	else if (distToA < distToB)
		return 'A';
}

int random(int x, int y)
{
	return rand() % (y - x + 1) + x;
}

//Point* closest(Point p, Point A[], int a, Point B[], int b)
//{
//	Point ACP;	//A's center point
//	Point BCP;	//B's center point
//
//	ACP = center(A, a);
//	BCP = center(B, b);
//
//	float distToA = p.distance(ACP);
//	float distToB = p.distance(BCP);
//
//	return distToA > distToB ? A : B;
//}
