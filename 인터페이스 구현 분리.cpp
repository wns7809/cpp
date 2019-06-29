#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Phone {
	int size;
	string color;

public: //인터페이스 정의
	void talk();
	void game();
};

void Phone::talk() {
	cout << "전화기로 통화하다" << endl;
}
void Phone::game() {
	cout << "전화기로 게임하다" << endl;
}

int main()
{
	Phone p1; //객체생성
	//인터페이스 상태의 함수는 아직 사용 불가.

	p1.talk();
	p1.game();

	return 0;
}
