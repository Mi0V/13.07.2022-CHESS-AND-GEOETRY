#include <iostream>

void main()
{
	int chess;
	std::cout << "Enter board size: ";
	std::cin >> chess;
	char CHAR = '+';
	char CHAR1 = '+';
	for (int i = 0; i < chess; i++)
	{
		if (CHAR1 == '+')
		{
			for (int j = 0; j < chess; j++)
			{
				if (CHAR == '+')
				{
					std::cout << char(219) << char(219);
					CHAR = '-';
				}
				else
				{
					std::cout << char(176) << char(176);
					CHAR = '+';
				}
			}
			CHAR1 = '-';
			std::cout << std::endl;
		}	
		else
		{
			for (int j = 0; j < chess; j++)
			{
				if (chess%2==0)
				{
					if (CHAR == '+')
					{
						std::cout << char(176) << char(176);
						CHAR = '-';

					}
					else
					{
						std::cout << char(219) << char(219);
						CHAR = '+';
					}
				}
				else
				{
					if (CHAR == '+')
					{
						std::cout << char(219) << char(219);
						CHAR = '-';

					}
					else
					{
						std::cout << char(176) << char(176);
						CHAR = '+';
					}
				}
			}
			CHAR1 = '+';
			std::cout << std::endl;
		}
		
	}

}