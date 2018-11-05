#pragma once
class Triangle
{
public:
	Triangle();
	Triangle(Triangle *ptr);
	Triangle(const Triangle &ref);
	Triangle(double a, double b, double c);

	~Triangle();

	Triangle & operator= (const Triangle & src);

	double a;
	double b;
	double c;

	double getPerimeter();
	bool isPerpeticular();
	double getArea();
};

