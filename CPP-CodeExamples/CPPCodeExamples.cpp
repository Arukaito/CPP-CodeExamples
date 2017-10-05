// CPPCodeExamples.cpp : Defines the entry point for the console application.
//

//Siempre tenemos que iniciar con la libreria stdafx.h incluida para programas de C++
#include "stdafx.h"
#include <iostream>


int main()
{

	
    return 0;
}

int helloworld()
{
	//Utilizamos cout para mostrar mensaje Hello World
	//Utilizamos GetChar para que la consola no se cierre
	// podemos usar tambien estos metodos
	//std::cin.clear(); // reset any error flags
	//std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	//std::cin.get(); // get one more char from the user
	std::cout << "Hello World" << std::endl;
	std::getchar();
	return 0;
}

int statements()
{
	const int x = 5;
	std::cout << x;
	return 0;
}

