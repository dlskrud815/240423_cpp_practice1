#include <iostream>

int main()
{
	//int num1, num2, operator1, result;
	//char operator2;

	int num1, num2, result;
	char operator1;

	std::cout << "두 개의 변수와 연산자를 입력 받아 계산할 수 있는 프로그램\n" 
		<< std::endl << "첫 번째 변수를 입력하세요 : ";
	std::cin >> num1;

	while (num1 != -1) {
		std::cout << "두 번째 변수를 입력하세요 : ";
		std::cin >> num2;
		std::cout << "연산자를 입력하세요(+,-,*,/,%) : ";
		//std::cout << "연산자를 입력하세요 (+:0, -: 1, *: 2, /: 3, %: 4) : ";
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
			std::cout << "잘못된 연산자입니다.\n";
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