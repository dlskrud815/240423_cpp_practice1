#include <iostream>
using namespace std;

int main() 
{
	//실습1 구구단 만들기 -> while문
	//1) 5단만 출력해보기
	int i = 1;

	cout << "5단 출력" << endl;

	while (i < 10)
	{
		cout << "5 * " << i << " = " << 5 * i << endl;
		i++;
	}
	cout << endl;

	//2) 1~9단까지 모두 출력해보기
	
	int j = 1;

	cout << "1~9단 출력\n";
	
	while (j < 10)
	{
		cout << "---- " << j << "단 ----" << endl;

		int k = 1;

		while (k < 10)
		{
			cout << j << " * " << k << " = " << j * k << endl;
			k++;
		}
		j++;
	}
	cout << endl;


	//실습2 1부터 n까지의 합 구하기
	//1부터 사용자가 입력한 숫자까지의 합을 출력하는 코드 작성

	int input, output = 0;
	int a = 1;

	cout << "1부터 n까지의 합 구하기" << endl << endl
		<< "숫자(양의 정수)를 입력하세요 : ";
	cin >> input;

	while (a <= input)
	{
		output += a;
		a++;
	}

	cout << "1부터 " << input << "까지의 합은 : " << output << endl << endl;


	//실습4 사용자가 입력한 숫자 더하기
	/*
		사용자가 입력한 숫자들을 계속 더하는 프로그램 만들기
		사용자는 더하고 싶은 숫자를 횟수 제한 없이 입력할 수 있다.
		단, 0을 입력하면 종료
	*/

	int num, sum=0;

	cout << "사용자가 입력한 숫자 더하기" << endl << endl;

	while (1)
	{
		cout << "숫자를 입력하세요 (0: exit) : ";
		cin >> num;

		if (num == 0) {
			cout << "사용자가 입력한 수의 합은 : ";
			break;
		}
		sum += num;
	}
	cout << sum << endl << endl;


	//[번외] 실습. 입력한 숫자만큼 별 찍기

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