#include <iostream>

int main() {
	int num;

	std::cout << "���ڸ� �Է����ּ���." << std::endl;
	std::cin >> num;

	num % 5 == 0 ? std::cout << num << "��(��) 5�� ����Դϴ�.\n" : std::cout << num << "��(��) 5�� ����� �ƴϳ׿�̤�\n";

	return 0;
}