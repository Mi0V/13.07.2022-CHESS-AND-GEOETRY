#include <iostream>
#include <cstring>
//#define GEO1
//#define GEO2
//#define GEO3
//#define GEO4
//#define GEO5
//#define GEO6
//#define GEO7


void main()
{
	setlocale(LC_ALL, "rus");
#ifdef GEO1
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
#endif // GEO1
#ifdef GEO2
	int n = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
		n += 1;
	}

#endif // GEO2
#ifdef GEO3
	int n = 5;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < n; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
		n -= 1;
	}
#endif // GEO3
#ifdef GEO5
	int n = 0;
	int space = 4;

	for (int i = 5; i > 0; i--)
	{
		for (int sim = 4; sim > space; sim--)
		{
			std::cout << char(' ');
		}
		space -= 1;
		for (int j = 5; j > n; j--)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
		n += 1;

	}
#endif // GEO5
#ifdef GEO4
	int n = 1;
	int space = 4;

	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < space; j++)
		{
			std::cout << char(' ');
		}
		space -= 1;
		for (int j = 0; j < n; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
		n += 1;

	}
#endif // GEO4
#ifdef GEO6
	int space = 5;
	int space_1 = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < space; j++)
		{
			std::cout << char(' ');
		}
		std::cout << "/";
		space -= 1;
		for (int j = 0; j < space_1; j++)
		{
			std::cout << char(' ');
		}
		std::cout << "\\";
		space_1 += 2;
		std::cout << std::endl;
	}
	space_1 -= 2;
	for (int i = 0; i < 5; i++)
	{
		for (int j = -1; j < space; j++)
		{
			std::cout << char(' ');
		}
		std::cout << "\\";
		space += 1;
		for (int j = 0; j < space_1; j++)
		{
			std::cout << char(' ');
		}
		std::cout << "/";
		space_1 -= 2;
		std::cout << std::endl;
	}
#endif // GEO6
#ifdef GEO7
	char CHAR = '-';
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (CHAR == '+')
			{
				CHAR = '-';
				std::cout << CHAR;
			}
			else
			{
				CHAR = '+';
				std::cout << CHAR;
			}

		}
		std::cout << std::endl;
	}
#endif // GEO7

		

	




}