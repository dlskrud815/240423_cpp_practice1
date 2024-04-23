// 5단만 출력해보기
// 1~9단까지 모두 출력해보기

#include <iostream>
using namespace std;

int main() 
{
	cout << "5단 출력\n";

	for (int i = 1; i < 10; i++)
	{
		cout << "5 * " << i << " = " << 5 * i << endl;
	}

	cout << "\n1~9단 출력\n";

	for (int j = 1; j < 10; j++)
	{
		cout << "---- " << j << "단 ----\n";

		for (int k = 1; k < 10; k++)
		{
			cout << j <<" * " << k << " = " << j * k << endl;
		}
	}

	return 0;
}