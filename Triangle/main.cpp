// Objektorientierung 1.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <iostream>
#include "Triangle.h"


int main()
{
	// Creating some empty Triangles
	Triangle foo;
	Triangle bar;
	Triangle baz;

	int number = 55;
	int * pNumber = &number;

	// Initalizing Foo
	foo.m_a = 11;
	foo.m_b = 12;
	foo.m_c = 13;
	foo.m_pData = pNumber;


	// Overwriting the others
	bar = foo;

	std::cout << foo.m_a << ", " << bar.m_a << std::endl;

	std::cout << pNumber << ", " << foo.m_pData << ", " << bar.m_pData << std::endl;
	std::cout << *pNumber << ", " << *foo.m_pData << ", " << *bar.m_pData << std::endl;
    return 0;
}

