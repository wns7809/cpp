#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
	string name;
	int age;

	//멤버변수 초기화를 넣어주는 함수가 따로있다.
	//클래스를 복사(객체생성)
	//객체생성시 자동으로 호출되는 함수(생성자)
	//생성자는 반환값이 없음.
	//생성자(함수)는 클래스이름과 동일(대문자로 시작하는 유일한 함수)
	//생성자는 자동으로 호출!
	//명시적으로 호출X.

	Pet(string n, int a) {
		name = n;
		age = a;
	}
	Pet(string n) {
		name = n;
	}
	Pet(int a) {
		age = a;
	}
	Pet() {
		//입력값이 없이 자동으로 생성되는 생성자
		//기본 생성자
	}
	Pet(string n, int a) : name( n ), age( a ){}
	~Pet() {
		cout << name << ": 객체 소멸됨" << endl;
	}
	void eat() {
		cout << "먹다" << endl;
	}
	void speak(string n, int age) {
		cout << "멍멍멍멍" << endl;
	}
	void speak(string n) {
		cout << "야옹야옹" << endl;
	}
	void print() {
		cout << "이름은 " << name << ", " << "나이는 " << age << endl;
	}


};


int main()
{
	Pet dog{ "멍멍이" , 3 };
	Pet	cat{ "야옹이" , 5 };

	dog.print();
	dog.speak("dog", 3);

	cout << "-----------------------" << endl;

	cat.print();
	cat.speak("cat");

	return 0;
};
