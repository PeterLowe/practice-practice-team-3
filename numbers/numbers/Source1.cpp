// odd Sofiia Pankiv
// even Sofiia Pankiv

#include <iostream>

int main()
{
	//user input number
	int input = 7;

	std::cout << "Think of a number ?";
	std::cin >> input;

	if (input % 2 == 1) {
		std::cout << "the number was odd" << std::endl;
	}

	
	return 0;
}