#include <iostream>

int main() {
	int num;

	while (1) {
		std::cout << std::endl << "숫자를 입력해주세요." << std::endl;
		std::cin >> num;

		if (num == -1) 
		{
			return 0;
		}

		num % 5 == 0 ? std::cout << num << "은(는) 5의 배수입니다.\n"
			: std::cout << num << "은(는) 5의 배수가 아니네요ㅜㅜ\n";
	}
}