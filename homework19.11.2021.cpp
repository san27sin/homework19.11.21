/*Homework 
created by Sinitsyn A.
*/

#include<iostream>
using namespace std;

extern const int a;
extern const int b;
extern const int c;
extern const int d;

void main()
{
	setlocale(LC_ALL, "rus");
	/*1. Написать программу, вычисляющую выражение a * (b + (c /
	d)) и выводящую результат с плавающей точкой, где a, b, c, d
	– целочисленные константы. Используйте static_cast или СStyle cast к float чтобы выполнить точное деление.
	4. ** Написать программу, вычисляющую выражение из
	первого задания, а переменные для неё объявлены и
	инициализировать в другом cpp файле. Используйте extern.
	*/

	float e;

	e = a * ((b + (float(c) / d)));

	cout << "a * (b + (c / d)) = " << e << endl;

	/*2. Дано целое число.Если оно меньше или равно 21, то
		выведите на экран разницу между этим числом и числом 21.
		Если же заданное число больше, чем 21, необходимо вывести
		удвоенную разницу между этим числом и 21. При выполнении
		задания следует использовать тернарный оператор(? : ).
		*/

	cout << "Введите любое число!" << endl;
	int randomNumber, result;
	cin >> randomNumber;
	result = (randomNumber <= 21) ? (randomNumber - 21) : ((randomNumber - 21) * 2);
	cout << result << endl;

	/*
	3. * Описать трёхмерный целочисленный массив, размером
	3х3х3 и указатель на значения внутри массива и при помощи
	операции разыменования вывести на экран значение
	центральной ячейки получившегося куба [1][1][1].
	*/

	int Array[3][3][3]{ { {0 ,8 ,2 }, {3 ,4 , 5}, {6 ,7 ,8 } }, { {9 ,80,11}, {12,5,14}, {15,11,17} },{ {18,39,20}, {21,52,23}, {24,2,8} } }, * p_Arr;
	
	cout << "Значение центральной ячейки (без указателя): " << Array[1][1][1] << endl;
	p_Arr = &Array[1][1][1];
	*p_Arr = 7;
	cout << "Значение центральной ячейки (с указателем): " << Array[1][1][1] << endl;


}

