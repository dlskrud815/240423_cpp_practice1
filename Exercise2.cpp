#include <iostream>
using namespace std;

int main()
{
	int input, output=0;

	cout << "1부터 n까지의 합 구하기" << endl << endl
		<< "숫자(양의 정수)를 입력하세요 : ";
	cin >> input;

	for (int i = 1; i <= input; i++)
	{
		output += i;
	}

	cout << "1부터 " << input << "까지의 합은 : " << output << endl;

	return 0;
}