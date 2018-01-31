//  TEST_COUNTING.CPP

#include <catch.hpp>
#include "counting.hpp"
#include <vector>
#include <random>
#include <iterator>

TEST_CASE("test counting sort") {
    std::cout << "\n___________check_counting_sort___________\n" << std::endl;

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

    // Сортировка алгоритмом counting.
    counting_sort<int>(std::begin(array), std::end(array), value_digit);

    // Сравнение отсортированных массивов.
    for (int i = 0; i < array_size; i++) {
        REQUIRE(array[i] == v[i]);
    }
}
