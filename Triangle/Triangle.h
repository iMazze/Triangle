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

	double m_a;
	double m_b;
	double m_c;
	int * m_pData;

	double getPerimeter();
	bool isPerpeticular();
	double getArea();
};

