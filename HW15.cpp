#include <iostream>

void even_numbers(int n) // Function for getting and printing even numbers
{
	for (int i = 1; i <= n / 2; ++i) 
	{
		std::cout << 2 * i << " ";
	}
}

void odd_numbers(int n) // Function for receiving and printing odd numbers
{
	for (int i = 0; i < n/2; ++i)
	{
		std::cout << 2 * i + 1 << " ";
	}
	std::cout << n;
}


int main()
{
	int x;
	int n;

	std::cout << "The program outputs even or odd numbers up to the specified number. Enter a number: ";
	std::cin >> n;

	std::cout << "To output even numbers, enter 1. To output odd numbers, enter 2. Enter your choice: ";
	std::cin >> x;
	
	switch (x) 
	{
		case 1:
			even_numbers(n);
			break;
		case 2:
			odd_numbers(n);
			break;
		default:
			std::cout << "choice is undefined";
			break;
	}
}
