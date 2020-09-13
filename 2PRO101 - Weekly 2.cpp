
#include <iostream>
#include <string>

void Task01();
void Task02();
void Task03();
void Task04();
void Task05();
void Task06();

int main()
{
	system("CLS");
	int answer = 1;
	do
	{
		system("CLS");
		std::cout << "Which of these do you want to start? \n";
		std::cout << "1. While and For-loops." << std::endl;
		std::cout << "2. 100 -> 1 for-loop." << std::endl;
		std::cout << "3. 5 step loop using while-loops." << std::endl;
		std::cout << "4. 5 step loop using for-loops." << std::endl;
		std::cout << "5. 5 step loop using do-while loops." << std::endl;
		std::cout << "6. Grade question and Captal and lowercase check." << std::endl;
		std::cout << "0 or 7 to exit" << std::endl << std::endl;
		std::cout << "Which of these do you want to start? \n";
		std::cin >> answer;

		switch (answer)
		{
		case 1:
			Task01();
			break;
		case 2:
			Task02();
			break;
		case 3:
			Task03();
			break;
		case 4:
			Task04();
			break;
		case 5:
			Task05();
			break;
		case 6:
			Task06();
			break;
		default:
			return 0;
			break;
		}

	} while (answer > 0 && answer < 7);
	return 0;
}
void Task01()
{
	std::cout << "\n \n \n";
	std::cout << "First up is a while-loop that will count to 100." << std::endl;
	system("pause");
	int index = 1;
	
	//1 -> 100 while loop
	while (index <= 100)
	{
		std::cout << index << " ";
		index++;
	}
	
	std::cout << std::endl << std::endl << "Now the for-loop will count to 100 \n";
	system("pause");

	//1 -> 100 for loop
	for (int i = 1; i <= 100; i++)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl << std::endl << "That was Task 1, Now lets return to the main menu \n";
	system("pause");
}
void Task02()
{
	std::cout << "\n \n \n";
	std::cout << "Counting from 100 -> 1 \n";
	system("pause");
	for (int i = 100; i > 0; i--)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl << std::endl << "That was Task 2, Now lets head back to the main menu \n";
	system("pause");
}
void Task03()
{
	std::cout << "\n \n \n";
	std::cout << "Counting from 5 -> 50 in steps of 5 in a while-loop\n";
	system("pause");
	
	//Looping
	int step = 5;
	while (step <= 50)
	{
		std::cout << step << " ";
		step += 5;
	}
	std::cout << std::endl << std::endl << "That was Task 3. Lets get on back to the main menu \n";
	system("pause");
}
void Task04()
{
	std::cout << "\n \n \n";
	std::cout << "Counting from 5 -> 50 in steps of 5 in a for-loop \n";
	system("pause");

	for (int i = 5; i <= 50; i+=5)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl << std::endl << "That was Task 4. Lets get on back to the main menu \n";
	system("pause");
}
void Task05()
{
	std::cout << "\n \n \n";
	std::cout << "Counting from 5 -> 50 with a do-while loop\n";
	system("pause");
	int step = 5;
	do
	{
		std::cout << step << " ";
		step += 5;
	} while (step <= 50);

	std::cout << std::endl << std::endl << "That was Task 5. Lets get on back to the main menu \n";
	system("pause");
}
void Task06()
{
	char answer = 'a';
	std::cout << " [A]\n" << " [B]\n" << " [C]\n" << " [D]\n" << " [E]\n" << " [F]\n";
	std::cout << "What grade do you want to achieve during Programming 1? \n";
	std::cin >> answer;
	
	switch (answer)
	{
	case 'A': case 'a':
		std::cout << "Outstanding";
		break;
	case 'B': case 'b':
		std::cout << "Very good";
		break;
	case 'C': case 'c':
		std::cout << "Good";
		break;
	case 'D': case 'd':
		std::cout << "Some flaws";
		break;
	case 'E': case 'e':
		std::cout << "Not very good...";
		break;
	case 'F': case 'f':
		std::cout << "Fail";
		break;
	default:
		std::cout << "Sorry, that is not a valid grade";

		break;
	}
	std::cout << std::endl;
	system("pause");
}