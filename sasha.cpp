#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления периметра треугольника
double calculatePerimeter(double a, double b, double c) {
    return a + b + c;
}

// Функция для вычисления площади по формуле Герона
double calculateArea(double a, double b, double c) {
    double s = (a + b + c) / 2; // Полупериметр
    return sqrt(s * (s - a) * (s - b) * (s - c)); // Площадь по формуле Герона
}

// Функция для проверки равнобедренности треугольника
bool isIsosceles(double a, double b, double c) {
    return (a == b || b == c || a == c);
}

int main() {
    double a, b, c;

    // Ввод сторон треугольника
    cout << "Введите длины сторон треугольника (a, b, c): ";
    cin >> a >> b >> c;

    // Проверка на существование треугольника
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = calculatePerimeter(a, b, c);
        double area = calculateArea(a, b, c);
        bool isIsoscelesTriangle = isIsosceles(a, b, c);

        // Вывод результатов
        cout << "Периметр треугольника: " << perimeter << endl;
        cout << "Площадь треугольника: " << area << endl;
        cout << "Треугольник равнобедренный: " << (isIsoscelesTriangle ? "Да" : "Нет") << endl;
    } else {
        cout << "Треугольник с такими сторонами не существует." << endl;
    }

    return 0;
}