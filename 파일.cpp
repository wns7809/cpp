#include "pch.h"
#include <iostream>
#include <string>
#include <fstream> //file 관련
using namespace std;

int main()
{
				// ┌만들거나 덮어씀  디렉터리는 안만듬
	ofstream os{ "c:/temp/me.txt" };
	for (int i = 1; i < 101; i++)
	{
		os << i << endl;
	}
	
	return 0;
}
