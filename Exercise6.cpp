// 5�ܸ� ����غ���
// 1~9�ܱ��� ��� ����غ���

#include <iostream>
using namespace std;

int main() 
{
	cout << "5�� ���\n";

	for (int i = 1; i < 10; i++)
	{
		cout << "5 * " << i << " = " << 5 * i << endl;
	}

	cout << "\n1~9�� ���\n";

	for (int j = 1; j < 10; j++)
	{
		cout << "---- " << j << "�� ----\n";

		for (int k = 1; k < 10; k++)
		{
			cout << j <<" * " << k << " = " << j * k << endl;
		}
	}

	return 0;
}