#pragma once

int menu(int choice);

int menu(int choice)
{
	bool menuok = 0;

	int option = 0;

	do
	{
		system("CLS");
		std::cout << "What do you choose?\n" << std::endl;
		std::cout << "1: Task 1\n" << "2: Task 2\n" << "3: Task 3\n" << "4: Task 4\n" << "5: Quit\n" << std::endl;

		std::cin >> option;

		switch (option)
		{
		case 1:
			menuok = 1;
			std::cout << "You have chosen: "<< "Task 1" << std::endl;
			system("PAUSE");
			break;

		case 2:
			menuok = 1;
			std::cout << "You have chosen: " << "Task 2" << std::endl;
			system("PAUSE");
			break;

		case 3:
			menuok = 1;
			std::cout << "You have chosen: " << "Task 3" << std::endl;
			system("PAUSE");
			break;

		case 4:
			menuok = 1;
			std::cout << "You have chosen: " << "Task 4" << std::endl;
			system("PAUSE");
			break;

		case 5:
			std::cout << "Bye bye" << std::endl;
			system("PAUSE");
			exit(0);
			break;

		default:
			std::cout << "Wrong input... Do you want to try again?: (y/n)" << std::endl;
			char yn = ' ';
			std::cin >> yn;

			switch (yn)
			{
			case 'Y':
			case 'y':
				break;
			case 'N':
			case 'n':
				std::cout << "Bye bye" << std::endl;
				system("PAUSE");
				exit(0);
				break;
			}
		}

	} while (menuok == 0);

	choice = option;

	return choice;
}