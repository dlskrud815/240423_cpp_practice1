#include <iostream>

int main()
{
	int num1, num2, operator1, result;
	char operator2;

	std::cout << "�� ���� ������ �����ڸ� �Է� �޾� ����� �� �ִ� ���α׷�" 
		<< std::endl << "ù ��° ������ �Է��ϼ��� : ";
	std::cin >> num1;
	std::cout << "�� ��° ������ �Է��ϼ��� : ";
	std::cin >> num2;
	std::cout << "�����ڸ� �Է��ϼ��� (+:0, -: 1, *: 2, /: 3, %: 4) : ";
	std::cin >> operator1;


	switch (operator1)
	{
	case 0:
		operator2 = '+';
		result = num1 + num2;
		break;
	case 1:
		operator2 = '-';
		result = num1 - num2;
		break;
	case 2:
		operator2 = '*';
		result = num1 * num2;
		break;
	case 3:
		operator2 = '/';
		result = num1 / num2;
		break;
	case 4:
		operator2 = '%';
		result = num1 % num2;
		break;
	}

	std::cout << num1 << operator2 << num2 << "=" << result << std::endl;

	return 0;
}