#include <iostream>
using namespace std;

int main()
{
	int input, output=0;

	cout << "1���� n������ �� ���ϱ�" << endl << endl
		<< "����(���� ����)�� �Է��ϼ��� : ";
	cin >> input;

	for (int i = 1; i <= input; i++)
	{
		output += i;
	}

	cout << "1���� " << input << "������ ���� : " << output << endl;

	return 0;
}