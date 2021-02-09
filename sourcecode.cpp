/// Author : N E W E
/// Date : 26/01/2021


#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <thread>
#include <fstream>



int main()
{
	int number = 0;
	int count = 0;
	int seed = 6;
	srand(time(0));

	std::string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	

	std::cout << R"(
	  ___  _                   _    ___ _  __ _      ___                       _           
	 |   \(_)___ __ ___ _ _ __| |  / __(_)/ _| |_   / __|___ _ _  ___ _ _ __ _| |_ ___ _ _ 
	 | |) | (_-</ _/ _ \ '_/ _` | | (_ | |  _|  _| | (_ / -_) ' \/ -_) '_/ _` |  _/ _ \ '_|
	 |___/|_/__/\__\___/_| \__,_|  \___|_|_|  \__|  \___\___|_||_\___|_| \__,_|\__\___/_|  
	 )" << std::endl;
	
	std::cout << "How many discord link ?\n" << std::endl;
	std::cin >> number;

	//create or open the .txt document
	std::ofstream myfile("discord.txt");


	if (number < 50000) {

		while (number != count)
		{
			std::string link;
			int line = 0;

			while (line != 15)
			{
				//random
				int random = rand() % letters.size();

				//numbers = letters
				link += letters[random];

				line += 1;
			}

			std::cout << "https://discord.gift/" << link << std::endl;

			//check the .txt document + write the gift codes in
			if (myfile){
				myfile << "https://discord.gift/" << link << "\n";
			}
			else {
				std::cout <<"ERROR"<< std::endl;
			}

			count += 1;
		}

	}
	else {
		std::cout << "ERROR ! \n number need to be < than 50000" << std::endl;
	}

	std::cout << "DONE \n" << std::endl;
	std::cout << "Discord : NEWE#9471 \nTelegram : @NEWE69 \n" << std::endl;

	myfile << "Discord : NEWE#9471 \nTelegram : @NEWE69 \n";
	std::this_thread::sleep_for(std::chrono::milliseconds(5000));
	std::cin.ignore();
	return 0;
}
