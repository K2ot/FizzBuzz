#include <iostream>
#include <string>

void FizzBuzz1()
{
	for (size_t i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			std::cout << "Fizz Buzz \n";
			continue;
		}

		if (i % 3 == 0)
		{
			std::cout << "Fizz \n";
			continue;
		}

		if (i % 5 == 0)
		{
			std::cout << "Buzz \n";
		}
		else
		{
			std::cout << i << std::endl;
		}
	}
}
void FizzBuzz2()
{
	for (size_t i = 1; i <= 100; i++)
	{
		std::string fizzbuzz = std::to_string(i);
		if (i % 3 == 0)
		{
			fizzbuzz = "Fizz";
			if (i % 5 == 0)
			{
				fizzbuzz += " Buzz";
				std::cout << fizzbuzz << std::endl;
				continue;
			}

		}

		if (i % 5 == 0)
		{
			fizzbuzz = "Buzz";
		}
		std::cout << fizzbuzz << std::endl;
	}
}
int main(void)
{
	FizzBuzz1();
}
