#include "pch.h"		//내가 만든것
#include <iostream>		//만오천여개 중에서 가져온것
#include <string>
#include <windows.h>
using namespace std;

class Circle {
public:	
	//앞이 좌표 뒤가 크기
	void draw(int x, int y, int w, int h) {
		HDC hdc = GetWindowDC(GetForegroundWindow());
		Ellipse(hdc, x, y, w, h);
	}
};

int main()
{
	Circle c1;
	c1.draw(300, 300, 100, 100);
	Circle c2;
	c2.draw(300, 300, 100, 600);
	system("pause");
	return 0;
}
		