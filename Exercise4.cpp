#include <iostream>

int main()
{
	//int num1, num2, operator1, result;
	//char operator2;

	int num1, num2, result;
	char operator1;

	std::cout << "�� ���� ������ �����ڸ� �Է� �޾� ����� �� �ִ� ���α׷�\n" 
		<< std::endl << "ù ��° ������ �Է��ϼ��� : ";
	std::cin >> num1;

	while (num1 != -1) {
		std::cout << "�� ��° ������ �Է��ϼ��� : ";
		std::cin >> num2;
		std::cout << "�����ڸ� �Է��ϼ���(+,-,*,/,%) : ";
		//std::cout << "�����ڸ� �Է��ϼ��� (+:0, -: 1, *: 2, /: 3, %: 4) : ";
		std::cin >> operator1;


		switch (operator1)
		{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		case '%':
			result = num1 % num2;
			break;
		default:
			std::cout << "�߸��� �������Դϴ�.\n";
		}

		if (result)
		{
			std::cout << num1 << operator1 << num2 << "=" << result << std::endl;
		}

		/*
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
		*/
	}

	return 0;
}