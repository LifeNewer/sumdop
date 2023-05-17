#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int number, sum = 0;
    std::cout << "Введите целое число: ";
    std::cin >> number;

    // Складываем цифры числа
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }

    std::cout << "Сумма цифр числа: " << sum << std::endl;

    return 0;
}
