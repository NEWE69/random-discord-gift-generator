/// Author : N E W E
/// Date : 26/01/2021
/// File : discord nitro generator

#include <iostream>
#include <string>
#include <ctime>

int main()
{
	int number = 0;
	int count = 0;
	int seed = 6;
	srand(time(0));

	std::string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	std::cout << "How many discord link ?\n" << std::endl;
	std::cin >> number;

	if (number < 50000) {

		while (number != count)
		{
			std::string link;
			int line = 0;

			while (line != 15)
			{
				//random

				int random = rand() % letters.size();

				//assigner une lettre a chaque chiffre
				link += letters[random];

				line += 1;
			}

			std::cout << "https://discord.gift/" << link << std::endl;



			count += 1;
		}

	}
	else {
		std::cout << "ERROR ! \n number need to be < than 50000" << std::endl;
	}

	std::cout << "DONE \n" << std::endl;

	std::cin.ignore();
	return 0;
}
