#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "");
    const int rows = 3;
    const int column = 5;
    double arr[rows][column];

    std::cout << "Введите элементы массива 3x5:" << std::endl;

    // Элементы входного массива=

    for (int i = 0; i < rows; i++) {
        std::cout << "Введите элементы для строки " << i + 1 << ": ";
        for (int j = 0; j < column; j++) {
            std::cin >> arr[i][j];
        }
    }

    // Вычислить среднее значение каждой строки

    for (int i = 0; i < rows; i++) {
        double sum = 0;
        for (int j = 0; j < column; j++) {
            sum += arr[i][j];
        }
        double average = sum / column;
        std::cout << "Среднее значение элементов в строке " << i + 1 << ": " << average << std::endl;
    }

    return 0;
}
