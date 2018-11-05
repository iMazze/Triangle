// Objektorientierung 1.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <iostream>
#include "Triangle.h"


int main()
{
	Triangle foo;
	Triangle bar;
	Triangle baz;

	foo.a = 11;
	foo.b = 12;
	foo.c = 13;

	bar = foo;
	baz = foo;

	std::cout << foo.a << ", " << bar.a << ", " << baz.a << std::endl;
    return 0;
}

