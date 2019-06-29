#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Pet {
public:
	string name;
	int age;
	
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
	Pet dog, cat;

	dog.name = "멍멍이";
	dog.age = 3;
	dog.print();
	dog.speak("dog", 3);

	cout << "-----------------------" << endl;

	cat.name = "야옹이";
	cat.age = 5;
	cat.print();
	cat.speak("cat");


	return 0;
}
