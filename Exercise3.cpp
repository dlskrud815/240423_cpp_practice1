#include <iostream>
using namespace std;

int main() 
{
	//�ǽ�1 ������ ����� -> while��
	//1) 5�ܸ� ����غ���
	int i = 1;

	cout << "5�� ���" << endl;

	while (i < 10)
	{
		cout << "5 * " << i << " = " << 5 * i << endl;
		i++;
	}
	cout << endl;

	//2) 1~9�ܱ��� ��� ����غ���
	
	int j = 1;

	cout << "1~9�� ���\n";
	
	while (j < 10)
	{
		cout << "---- " << j << "�� ----" << endl;

		int k = 1;

		while (k < 10)
		{
			cout << j << " * " << k << " = " << j * k << endl;
			k++;
		}
		j++;
	}
	cout << endl;


	//�ǽ�2 1���� n������ �� ���ϱ�
	//1���� ����ڰ� �Է��� ���ڱ����� ���� ����ϴ� �ڵ� �ۼ�

	int input, output = 0;
	int a = 1;

	cout << "1���� n������ �� ���ϱ�" << endl << endl
		<< "����(���� ����)�� �Է��ϼ��� : ";
	cin >> input;

	while (a <= input)
	{
		output += a;
		a++;
	}

	cout << "1���� " << input << "������ ���� : " << output << endl << endl;


	//�ǽ�4 ����ڰ� �Է��� ���� ���ϱ�
	/*
		����ڰ� �Է��� ���ڵ��� ��� ���ϴ� ���α׷� �����
		����ڴ� ���ϰ� ���� ���ڸ� Ƚ�� ���� ���� �Է��� �� �ִ�.
		��, 0�� �Է��ϸ� ����
	*/

	int num, sum=0;

	cout << "����ڰ� �Է��� ���� ���ϱ�" << endl << endl;

	while (1)
	{
		cout << "���ڸ� �Է��ϼ��� (0: exit) : ";
		cin >> num;

		if (num == 0) {
			cout << "����ڰ� �Է��� ���� ���� : ";
			break;
		}
		sum += num;
	}
	cout << sum << endl << endl;


	//[����] �ǽ�. �Է��� ���ڸ�ŭ �� ���

	int starNum;
	int b = 1;
	
	cout << "input: ";
	cin >> starNum;
	cout << "output: " << endl;

	while (b <= starNum)
	{
		int c = 1;

		while (c <= b)
		{
			cout << '*';
			c++;
		}
		cout << endl;
		b++;
	}

	return 0;
}