#include<iostream>
#include<cstdlib>
#include<time.h>
int GenerateRandomNumber()
{
	srand(time(0));
	int random =(rand() % 10)+1;
	return random;
}
int TakeInput(int  & attempt)
{
	
	int num=0;
	std::cout << "Guess the number :";
	std::cin >> num;
    attempt++;
	return num;	
	
}
void Description()
{
	std::cout << "DESCRIPTION:\n";
	std::cout << "You have to guess a number between 1 to 10.\nIf your guessed number is lower than the Hidden Number,";
	std::cout << "\nyou will get a Message:Too LowTry again!!!";
	std::cout << "\nOtherwise, you will get a Message :Too High Try again!!! \n\n";
}
void NumberGuessingGame(int random_number)
{
	std::cout << "\t\t\t\t\tNUMBER GUESSING GAME" << std::endl;
	Description();
	std::cout << "\t\t\t\t\tLETS START THE GAME\n\n";
	int attemp = 0;
	while (1)
	{
		int input = TakeInput(attemp);
		
		if (input>random_number)
		{
			std::cout << "Too High\nTry again!!!" << std::endl;
			std::cout << "______________________________" << std::endl;
		}
		else if (input<random_number)
		{
			std::cout << "Too Low\nTry again!!!" << std::endl;
			std::cout << "______________________________" << std::endl;
		}
		else
		{
			
			
			std::cout << "\nAMAZING!!!" << std::endl;
			std::cout << "You guessed the correct Number in " << attemp << " attempts" << std::endl;
			break;
		}
	}
}
int main()
{
	system("color 7C");
	int random_number = GenerateRandomNumber();
	NumberGuessingGame(random_number);
	return 0;
}