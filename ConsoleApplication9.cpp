//<<<<<<< HEAD
﻿// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "windows.h"
#include <iostream>
#include <iomanip>
#include "math.h"
using namespace std;

//Y = x5 + 2x2 - 3    2  4   0.2

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int min, max;
    float x, h, y;
    cout << "Enter min,max,h" << endl;
    cin >> min >> max >> h;
    x = min;
    while (x <= max + h / 2) {
        y = pow(x, 5) + 2 * pow(x, 2) - 3;
        cout << setw(7) << x << setw(7) << setprecision(3) << y << endl;
        x += h;
    }
	cout << "I changed my file";
    cout << "Hello from Visual Studio";

}

