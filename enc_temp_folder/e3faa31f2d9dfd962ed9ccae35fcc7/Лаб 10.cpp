
#include<iostream>

using namespace std;

void main() // початок програми мовою с++
{
	long X = 0; // змінна пам’яті для аргументу
	long S = 0; //змінна для зберігання суми
	_asm {; початок асемблерної вставки
	m1 : inc X; збільшення аргументу
		mov EAX, 15; EAX = 15
		mul X; EAX = 15 * x
		mul X; EAX = 15 * x * x
		mov S, EAX; пересилання 15 * x * x у комірку пам’яті
		mov EAX, 22; EAX = 22
		mul X; EAX = 15 * x
		add EAX, S; EAX = 15 * x * x + 15 * x
		sub S, 16; віднімання до S 16
		cmp S, 2000; порівняння суми з 2000
		jc m1; перехід, якщо сума менше 2000
	} // закінчення асемблерної вставки 
	cout << " X=" << X << " S=" << S << endl;
	system("pause");
}



