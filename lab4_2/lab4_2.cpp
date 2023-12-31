﻿/*
Дано целое число N (>0). Найти произведение N ! = 1*2*…*N (N – факториал).
Чтобы избежать целочисленного переполнения, вычислять это произведение с помощью 
вещественной переменной и вывести его как вещественное число.
*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    size_t nf = 1;
    cout << "Введите число n (>0), факториал которого надо вычислить" << endl << "n = ";
    cin >> n;
    if (n <= 0)
    {
        cerr << "Ошибка: число n должно быть больше нуля";
        return 1;
    }
    for (size_t i = 1; i <= n; i++)
    {
        nf *= i;
    }
    cout << n << "! = " << nf;
}