#include <iostream>
#include "Log.h"

int main()
{

	const char* string = "Hello";
	for (int i = 0; i < 6; i++)
	{
		const char c = string[i];
		
		std::cout << c << std::endl;
	}

	Log("Hello World");
	std::cin.get();
}

//�ϵ��F5����������shift+F11����������F11����䣬F10�����