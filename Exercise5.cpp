#include <iostream>

int main() {
	int num;

	while (1) {
		std::cout << std::endl << "���ڸ� �Է����ּ���." << std::endl;
		std::cin >> num;

		if (num == -1) 
		{
			return 0;
		}

		num % 5 == 0 ? std::cout << num << "��(��) 5�� ����Դϴ�.\n"
			: std::cout << num << "��(��) 5�� ����� �ƴϳ׿�̤�\n";
	}
}