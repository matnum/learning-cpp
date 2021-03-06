#include <iostream>
#include "limits"
#include "io.h"

int main()
{
	int x = readNumber();
	int y = readNumber();
	writeAnswer(x + y);

	// reset any error flags
	std::cin.clear();

	// Ignore any characters in the input buffer until we find an enter character
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

	// Get one more char from the user
	std::cin.get();

	return 0;
}

