﻿// программа1_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h> //ввод/вывод
#include <math.h>
#define PI 3.14 // директива постановки константы

void main()
{
    setlocale(LC_ALL, "");

    int a, b, h, c, v;

    printf("Введите основание a");
    std::cin >> a;
    printf("Введите основание b");
    std::cin >> b;
    printf("Введите высоту h");
    std::cin >> h;

    c = (a + b) * h / 2;
    printf("Площадь трапеции равна: %d", c);

    v = 1 * PI * h * (a * a + a * b + b * b) / 3;
    printf("Объём усечённого конуса равен: %d", v);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
