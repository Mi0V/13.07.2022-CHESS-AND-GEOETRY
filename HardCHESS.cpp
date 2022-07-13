#include <iostream>

void main()
{
	int chess;
	std::cout << "Enter board size: ";
	std::cin >> chess;
	char CHAR1 = '*';
	char CHAR = '*';
	for (int i = 0; i < chess; i++)
	{
		if (CHAR == '*')
		{
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < chess; j++)
				{
					if (CHAR == '*')
					{
						for (int j = 0; j < 9; j++)
						{

							if (CHAR1 == '*')
							{
								std::cout << '*';
								CHAR = ' ';
								CHAR1 = ' ';
							}
							else
							{
								std::cout << ' ';
								CHAR = ' ';
								CHAR1 = '*';
							}

						}
						CHAR1 = '*';
					}
					else
					{
						for (int j = 0; j < 9; j++)
						{
							std::cout << ' ';
							CHAR = '*';
						}
					}

				}
				CHAR = '*';
				std::cout << std::endl;
			}
			CHAR = ' ';
		}
		else
		{
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < chess; j++)
				{
					if (CHAR == '*')
					{
						for (int j = 0; j < 9; j++)
						{

							if (CHAR1 == '*')
							{
								std::cout << '*';
								CHAR = ' ';
								CHAR1 = ' ';
							}
							else
							{
								std::cout << ' ';
								CHAR = ' ';
								CHAR1 = '*';
							}

						}
						CHAR1 = '*';
					}
					else
					{
						for (int j = 0; j < 9; j++)
						{
							std::cout << ' ';
							CHAR = '*';
						}
					}

				}
				CHAR = ' ';
				std::cout << std::endl;
			}
			CHAR = '*';
		}
	}
}