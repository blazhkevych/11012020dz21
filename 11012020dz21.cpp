/*
** Пользователь 	вводит с клавиатуры двухзначное число.Вывести на экран количество сотен и 	десятков этого числа.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите с клавиатуры двузначное число: ";
	int a, b, c;
	cin >> a;
	b = a / 10;
	c = a / 100;
	cout << int(c) << " сотен, " << int(b) << " десятков." << endl;
	return 0;
}
