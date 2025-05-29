#include "vector_processor.h"
#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::string filename = "input.txt";
    auto numbers = VectorProcessor::loadFromFile(filename);

    if (numbers.empty()) {
        std::cerr << "Ошибка: файл пуст или не найден" << std::endl;
        return 1;
    }

    VectorProcessor::printVector(numbers, "Исходный вектор: ");

    int n;
    std::cout << "Введите число для поиска: ";
    std::cin >> n;

    auto [count, positions] = VectorProcessor::findNumber(numbers, n);
    std::cout << "Число " << n << " встречается " << count << " раз(а) на позициях: ";
    for (auto pos: positions) std::cout << pos << " ";
    std::cout << std::endl;

    auto [even_count, sum] = VectorProcessor::processEvenNumbers(numbers);
    std::cout << "Количество четных чисел: " << even_count << std::endl;
    std::cout << "Вычисленная сумма: " << sum << std::endl;

    auto sorted = VectorProcessor::sortVector(numbers);
    VectorProcessor::printVector(sorted, "Отсортированный вектор: ");

    auto swapped = VectorProcessor::swapFirstLast(numbers);
    VectorProcessor::printVector(swapped, "Вектор после обмена первого и последнего элемента: ");

    return 0;
}
