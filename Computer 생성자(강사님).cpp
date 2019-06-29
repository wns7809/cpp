#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Computer {
public:
	int price;
	string company;
	int ram;

	Computer() {}
	Computer(int p) : price{p}{}
	Computer(string c) : company{c}{}
	Computer(int p, string c) : price{p},company{c}{}
	Computer(int p, string c, int r) : price{ p }, company{ c }, ram{ r }{}

	~Computer() {
		cout << company << "컴퓨터를 껏습니다." << endl;
	}

	void print() {
		cout << price << ", " << company << ", " << ram << endl;
	}
};

int main()
{
	Computer c1;
	c1.print();
	Computer c2{ 100 };
	c2.print();
	Computer c3{ "apple" };
	c3.print();
	Computer c4{ 100, "apple"};
	c4.print();
	Computer c5{ 100, "apple", 128 };
	c5.print();
	return 0;
}
