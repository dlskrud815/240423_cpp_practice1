#include <iostream>

int main()
{
	int loop_count = 100;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Iteration " << i + 1 << std::endl;
	}

	for (int j = 0; j < 500; j++)
	{
		if (loop_count == j)
		{
			int num;
			std::cin >> num;
		}

		std::cout << j << std::endl;
	}

	return 0;
}