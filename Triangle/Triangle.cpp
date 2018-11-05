#include "Triangle.h"
#include <cmath>


Triangle::Triangle()
{
}

Triangle::Triangle(Triangle * ptr)
{
	if (ptr == nullptr) 
	{
		m_a = 0;
		m_b = 0;
		m_c = 0;
	}
	else
	{
		m_a = ptr->m_a; // Gleicher Typ -> Kann auf private zugreifen!
		m_b = ptr->m_b;
		m_c = ptr->m_c;
	}
	
}

Triangle::Triangle(const Triangle & ref)
	:m_a(ref.m_a), m_b(ref.m_b), m_c(ref.m_c)
{
}

Triangle::~Triangle()
{
}

Triangle & Triangle::operator=(const Triangle & src)
{
	m_a = src.m_a;
	m_b = src.m_b;
	m_c = src.m_c;

	// Here we cant copy the pointer like this pDatm_a = src.pData;
	m_pData = new int;
	*m_pData = *src.m_pData;

	return *this;
}

Triangle::Triangle(double a, double b, double c) 

{
	this->m_a = a;
	this->m_b = b;
	this->m_c = c;
}

double Triangle::getPerimeter()
{
	return m_a + m_b + m_c;
}

bool Triangle::isPerpeticular()
{
	return (std::pow(m_c,2) == std::pow(m_a, 2) + std::pow(m_b, 2) || std::pow(m_b, 2) == std::pow(m_a, 2) + std::pow(m_c, 2) || std::pow(m_a, 2) == std::pow(m_b, 2) + std::pow(m_c, 2));
}

double Triangle::getArea()
{
	// Satz des Heron
	double s = (getPerimeter())/2;
	return std::sqrt(s*(s- m_a)*(s- m_b)*(s- m_c));
}