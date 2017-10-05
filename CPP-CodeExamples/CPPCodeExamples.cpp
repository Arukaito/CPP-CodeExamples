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
	//Declaramos la variable
	const int x = 5;
	//imprimimos la variable x
	std::cout << x;
	return 0;

	int y;      // definimos la variable como un INT
	y = 4;      // 4 evalua a 4 que luego asigna Y
	y = 2 + 5;  // 5 + 2 evalua a 7 que luego asigna a Y

	int z;      // define el INT de Z
	z = y;      // y evalua a 7 en el ejemplo anterior que evalua a Z
	z = z;      // z evalua a 7 quien evalua a 7 ( INSERVIBLE )
	z = z + 1;  // Z + 1 evalua A 8, que luego es asignado a z.

}

