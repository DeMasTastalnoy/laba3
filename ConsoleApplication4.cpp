// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

float perim(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float l1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float l2 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float l3 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	if ((l1 + l2) <= l3)
		cout << "\n" << "Не выполняется неравенство" << "\n";
	else if ((l1 + l3) <= l2)
		cout << "\n" << "Не выполняется неравенство" << "\n";
	else if ((l2 + l3) <= l1)
		cout << "\n" << "Не выполняется неравенство" << "\n";
	else
		cout << "\n" << l1 + l2 + l3 << "\n";
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	float Ax = 3;
	float Ay = 3;
	float Bx = 5;
	float By = 12;
	float Cx = 43.5 ;
	float Cy = 44.5 ;
	float Dx = 15.5;
	float Dy = 5.5;
	cout << "Периметр ABC";
	perim(Ax, Ay, Bx, By, Cx, Cy);
	cout << "Периметр ABD";
	perim(Ax, Ay, Bx, By, Dx, Dy);
	cout << "Периметр ACD";
	perim(Ax, Ay, Dx, Dy, Cx, Cy);
	return 0;
}