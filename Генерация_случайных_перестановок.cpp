// Горохова Полина 
// БПМ-22-1
// Вариант 8 - генерация случайных перестановок


#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main() {
    // Количество элементов n
    int n;
    std::cout << "Введите максимальный элемент перестановки:" << '\n';
    std::cin >> n;
    
    // Создание вектора от 1 до n
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        nums[i] = i + 1;
    }
    
    // Генерация случайной перестановки
    std::random_device rd;
    std::mt19937 gen(rd());
    std::shuffle(nums.begin(), nums.end(), gen);
    
    // Вывод случайной перестановки
    std::cout << "Случайная перестановка: " << '\n';
    for (int num : nums) {
        std::cout << num << " ";
    }
    
    return 0;
}
