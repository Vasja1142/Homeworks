﻿// 7. Написать функцию min с переменным числом параметров, которая находит минимальное из чисел типа int или из чисел типа double, 
// тип параметров определяется с помощью первого параметра функции. Написать вызывающую функцию main, которая обращается к функции min 
// не менее трех раз с количеством параметров 5, 10, 12.
//

#include "lab7.2.h"

using namespace std;

int min(int, ...);
double min(double, ...)


int main() {
	setlocale(LC_ALL, "Ru");
	int x = 8;

	cout << "Минимальное значение 1: " << min(5, 1, 2, -5, 3, 7) << endl;
	cout << "Минимальное значение 2: " << min(10, 1, 2, 9, 3, 7, 5, 7, 2, 1, 0) << endl;
	cout << "Минимальное значение 3: " << min(12, 1, 2, -1, 3, 7, 8, 0, 1, 7, 2, -2, 1) << endl;

	return 0;
}


int min(int k, ...) {

	int* p = &k; //настроили указатель на параметр k
	p += 2;
	int min = *(p);
	for (; k > 0; k--){
		p += 2;
		if (*p < min) {
			min = *p;
		}
	}
	return min;
}

double min(double k, ...) {

	int* p = &k; //настроили указатель на параметр k
	p += 2;
	double min = *(p);
	for (; k > 0; k--) {
		p += 2;
		if (*p < min) {
			min = *p;
		}
	}
	return min;
}