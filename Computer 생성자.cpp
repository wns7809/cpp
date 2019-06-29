#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Computer {
public:
	int price;
	string name;
	int ram;
	Computer(int a) {
		price = a;
	}

	Computer(string b) {
		name = b;
	}

	Computer(int a,string b) {
		price = a;
		name = b;
	}
	Computer(int a, string b,int c) {
		price = a;
		name = b;
		ram = c;
	}
	~Computer() {
		cout << "apple컴퓨터를 껏습니다" << endl;
	}
	void print() {
		cout << "가격 : " << price << " 회사이름 : " 
			<< name << " Ram 용량 : " << ram << endl;
	}
};

int main()
{
	Computer a{ 1000,"company",16 };
	a.print();

	
	
	return 0;
}
