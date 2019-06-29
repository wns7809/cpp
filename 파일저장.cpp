#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string date,title,content;
	cout << "날짜 : " << endl;
	cin >> date;
	ofstream os{ "c:/temp/" + date + ".txt" };
	cout << "제목 : " << endl;
	cin >> title;
	cout << "내용 : " << endl;
	cin >> content;
	
	os << date << endl;
	os << title << endl;
	os << content << endl;

	return 0;
}
