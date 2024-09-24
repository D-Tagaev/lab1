﻿
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); //установка кирилицы
	
	//Завдання 1; Begin20. Дано число A. Обчислити A^15, використовуючи дві допоміжні змінні і п'ять операцій множення. Для цього послідовно знайдіть A^2, A^3, A^5, A^10, A^15. Вивести всі знайдені степені числа A
	
	float A; //змінна для числа A
	cout << "Введите любое число A: "; //об'ява змінної
	cin >> A; //вводимо значення А 

	float A2 = A * A; //рахуємо А^2 (A^2 = A * A)
	float A3 = A2 * A; //рахуємо А^3
	float A5 = A2 * A3;
	float A10 = A5 * A5;
	float A15 = A10 * A5;

	cout << "A^2 = " << A2 << endl; //Обчислємо A^2 
	cout << "A^3 = " << A3 << endl; //Обчислємо A^3
	cout << "A^5 = " << A5 << endl;
	cout << "A^10 = " << A10 << endl;
	cout << "A^15 = " << A15 << endl;

	//Завдання 2; Begin7. Знайти довжину кола L і площу круга S заданого радіуса R: L = 2 · п · R, S = п · R^2. Значення п вважати рівним 3.14
    
	float R; //зміна для числа R
	const double P = 3.14; //вводимо P як число 3.14
	cout << "Любое число R: "; // об'ява змінної
	cin >> R; // вводим значение R 

	float R2 = R * R; //виражаємо R^2, як R*R
	double L = 2 * P * R; //знаходимо довжину кола
	double S = P * R2; //знаходимо площу 


	cout << "L = " << L << endl; //виводимо результат довжини кола
	cout << "S = " << S << endl; //виводимо результат площі

	return 0;
}
