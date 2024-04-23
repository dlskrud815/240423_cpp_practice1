/*
	숫자 맞추기 게임

	문제 설명 :
	1부터 100까지 임의의 숫자를 생성하고,
	사용자가 이 숫자를 맞추는 게임을 만드세요.
	사용자가 숫자를 입력하면 프로그램은 입력한 숫자가 정답보다
	큰 지, 작은 지, 정답인지를 알려줍니다.
	사용자가 정답을 맞출 때까지 게임이 계속됩니다.

	문제 해결 방법 :
	1. 1부터 100 사이의 임의의 숫자를 생성합니다.
	2. 사용자로부터 숫자를 입력받습니다.
	3. 입력받은 숫자와 정답을 비교합니다.
	- 입력 숫자가 정답보다 작으면 "더 큰 숫자를 입력하세요."라고 출력합니다.
	- 입력 숫자가 정답보다 크면 "더 작은 숫자를 입력하세요."라고 출력합니다.
	- 입력 숫자가 정답이면 "정답입니다!"라고 출력하고 게임을 종료합니다.
	4. 3번 과정을 반복합니다.
*/

#include <iostream>
#include <random>
using namespace std;

int main()
{
	random_device rd; //시드값을 얻기 위한 random_device 생성
	mt19937 gen(rd()); //random_device 를 통해 난수 생성 엔진을 초기화 한다.
	uniform_int_distribution<int> dis(0, 100); //0부터 100까지 균등하게 나타나는 난수열 생성을 위해 균등 분포 정의

	// cout << "난수: " << dis(gen) << endl; //난수 생성 dis(gen)
	int randNum = dis(gen);
	int inputNum;

	//cout << "확인용: " << randNum << endl;

	while (1)
	{
		cout << "숫자를 입력하세요: ";
		cin >> inputNum;

		if (inputNum == randNum)
		{
			break;
		}

		if (inputNum < randNum)
		{
			cout << "더 큰 숫자를 입력하세요." << endl;
		}
		if (inputNum > randNum)
		{
			cout << "더 작은 숫자를 입력하세요." << endl;
		}
		if (inputNum == randNum)
		{
			break;
		}
	}

	cout << "정답입니다! 게임 종료" << endl;

	return 0;
}
