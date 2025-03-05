#include <iostream>
#include <cmath>
using namespace std;

// Функция для вычисления периметра
int calcPerimeter(int a, int b) {
    return 2 * (a + b);
}

// Функция для вычисления площади
int calcArea(int a, int b) {
    return a * b;
}

// Функция для вычисления длины диагонали
float calcDiagonal(int a, int b) {
    return sqrt(a * a + b * b);
}

// Основная функция для ввода данных и вывода результатов
int main() {    
    setlocale(LC_ALL, "Russian");
    int a, b;

    cout << "Введите сторону a прямоугольника: ";
    cin >> a;
    cout << "Введите сторону b прямоугольника: ";
    cin >> b;

    // Проверка на отрицательные значения
    if (a < 0) {
        cout << "Сторона a не может быть отрицательной. Устанавливаем a = 0." << endl;
        a = 0;
    }
    if (b < 0) {
        cout << "Сторона b не может быть отрицательной. Устанавливаем b = 0." << endl;
        b = 0;
    }

    cout << "Периметр прямоугольника: " << calcPerimeter(a, b) << endl;
    cout << "Площадь прямоугольника: " << calcArea(a, b) << endl;
    cout << "Диагональ прямоугольника: " << calcDiagonal(a, b) << endl;

    return 0; //добавил изменения
}
