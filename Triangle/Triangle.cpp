#include "Triangle.h"
#include <cmath>


Triangle::Triangle()
{
}

Triangle::Triangle(Triangle * ptr)
{
	if (ptr == nullptr) 
	{
		a = 0;
		b = 0;
		c = 0;
	}
	else
	{
		a = ptr->a; // Gleicher Typ -> Kann auf private zugreifen!
		b = ptr->a;
		c = ptr->a;
	}
	
}

Triangle::Triangle(const Triangle & ref)
	:a(ref.a), b(ref.b), c(ref.c)
{
}

Triangle::~Triangle()
{
}

Triangle & Triangle::operator=(const Triangle & src)
{
	a = src.a;
	b = src.b;
	c = src.c;

	return *this;
}

Triangle::Triangle(double a, double b, double c) 

{

	this->a = a;
	this->b = b;
	this->c = c;
}


double Triangle::getPerimeter()
{
	return a+b+c;
}


bool Triangle::isPerpeticular()
{
	return (std::pow(c,2) == std::pow(a, 2) + std::pow(b, 2) || std::pow(b, 2) == std::pow(a, 2) + std::pow(c, 2) || std::pow(a, 2) == std::pow(b, 2) + std::pow(c, 2));
}

double Triangle::getArea()
{
	// Satz des Heron
	double s = (getPerimeter())/2;
	return std::sqrt(s*(s-a)*(s-b)*(s-c));
}