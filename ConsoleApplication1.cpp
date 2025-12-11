// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	setlocale(LC_ALL, "Russian");
	cout << "Введите число: \n";
	cin >> a;

	cout << "Вы ввели: \n" << a << endl;
}


