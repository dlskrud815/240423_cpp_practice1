// 5�ܸ� ����غ���
// 1~9�ܱ��� ��� ����غ���

#include <iostream>

int main() 
{
	std::cout << "5�� ���\n";

	for (int i = 1; i < 10; i++)
	{
		std::cout << "5 * " << i << " = " << 5 * i << std::endl;
	}

	std::cout << "\n1~9�� ���\n";

	for (int j = 1; j < 10; j++)
	{
		std::cout << "------ " << j << "�� ------\n";
		for (int k = 1; k < 10; k++)
		{
			std::cout << j <<" * " << k << " = " << j * k << std::endl;
		}
	}
	return 0;
}