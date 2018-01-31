//  TEST_BUBBLE.CPP

#include <catch.hpp>
#include "bubble.hpp"
#include <vector>
#include <random>
#include <iterator>

TEST_CASE("test bubble sort") {
    std::cout << "\n___________check_bubble_sort___________\n" << std::endl;

    const int array_size = 10;
    const int value_digit = 100;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, value_digit);

    int array[array_size];

    for (int i = 0; i < array_size; i++) {
        array[i] = dis(gen);
    }

    // Стандартная сортировка для проверки.
    std::vector<int> v(std::begin(array), std::end(array));
    std::sort(v.begin(), v.end());

    // Сортировка алгоритмом bubble.
    bubble_sort(std::begin(array), std::end(array));

    // Сравнение отсортированных массивов.
    for (int i = 0; i < array_size; i++) {
        REQUIRE(array[i] == v[i]);
    }
}