#include <iostream>

int getUserInput()
{
	std::cout << "Please enter an integer: ";
	int value;
	std::cin >> value;
	return value;
}

int getMathematicalOperation()
{
	std::cout << "PLease enter which operator you want (1 = +, 2 = -, 3 = *, 4 = /): ";

	int op;
	std::cin >> op;

	return op;
}

int calculateResult(int x, int op, int y)
{
	if (op == 1) 
	{
		return x + y;
	}
	else if (op == 2) 
	{
		return x - y;
	}
	else if (op == 3)
	{
		return x * y;
	}
	else if (op == 4)
	{
		return x / y;
	}
	else
	{
		return x + y;
	}	
}

void printResult(int result)
{
	std::cout << "Your result is: " << result << std::endl;
}

int main()
{
	// Get first number from user
	int input1 = getUserInput();

	// Get mathematical operation from user
	int op = getMathematicalOperation();

	// Get second number from user
	int input2 = getUserInput();

	// Calculate result and store in temporary variable
	int result = calculateResult(input1, op, input2);

	// Print result
	printResult(result);

	return 0;
}