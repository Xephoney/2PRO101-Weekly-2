
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
		std::cout << "Which of these do you want to start? \n";
		std::cout << "1. While and For-loops." << std::endl;
		std::cout << "2. 100 -> 1 for-loop." << std::endl;
		std::cout << "3. 5 step loop using while-loops." << std::endl;
		std::cout << "4. 5 step loop using for-loops." << std::endl;
		std::cout << "5. 5 step loop using do-while loops." << std::endl;
		std::cout << "6. Grade question and Captal and lowercase check." << std::endl << std::endl;
		std::cout << "0 or 7 to exit" << std::endl << "	";
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
			Task03;
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
	std::cout << "First up is a while-loop that will count to 100." << std::endl;
	system("pause");
	int index = 1;
	while (index <= 100)
	{
		std::cout << index << std::endl;
		index++;
	}
	std::cout << std::endl << std::endl << "Now the for-loop will count to 100 \n";
	system("pause");
	for (int i = 0; i <= 100; i++)
	{
		std::cout << i << std::endl;
	}
	std::cout << std::endl << std::endl << "That was Task 1, Now lets return to the menu \n";
	system("pause");
}
void Task02()
{

}
void Task03()
{

}
void Task04()
{

}
void Task05()
{

}
void Task06()
{

}