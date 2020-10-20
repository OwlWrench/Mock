#pragma once
#include <ctime>
#include <cstdlib>

void Task1(int);
int getRandomNumber(int max);

void Task1(int)
{
	system("CLS");

	

	int un = 0;
	int deux = 0;
	int trois = 0;
	int quatre = 0;
	int cinq = 0;
	int six = 0;


	std::cout << "This program will now throw a dice 2000 times and show the results" << std::endl;
	system("PAUSE");

	for (int i = 0; i < 2000; i++)
	{
		int roll = getRandomNumber(6);

		switch (roll)
		{
		case 1:
			un++;
			break;
		case 2:
			deux++;
		case 3:
			trois++;
			break;
		case 4:
			quatre++;
			break;
		case 5:
			cinq++;
			break;
		case 6:
			six++;
			break;
		}
	}

	std::cout << "The results are in: " << std::endl;
	std::cout << "1: " << un << std::endl;
	std::cout << "2: " << deux << std::endl;
	std::cout << "3: " << trois << std::endl;
	std::cout << "4: " << quatre << std::endl;
	std::cout << "5: " << cinq << std::endl;
	std::cout << "6: " << six << std::endl;
	

	system("PAUSE");

}


