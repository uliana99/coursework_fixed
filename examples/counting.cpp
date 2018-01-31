//  EXAMPLE_COUNTING.CPP

#include "counting.hpp"
#include "message.hpp"
#include <vector>
#include <random>
#include <iterator>

void counting() {
    const int array_size = 10;
    const int value_digit = 100;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, value_digit);

    int array[array_size];
    std::vector<int> v;

    for (int i = 0; i < array_size; i++) {
        array[i] = dis(gen);
        v.push_back(dis(gen));
    }

    std::cout << "_______COUNTING_SORT_______" << std::endl;
    std::cout << "_____sorting_of_array______" << std::endl;

    message(std::begin(array), std::end(array));
    counting_sort<int>(std::begin(array), std::end(array), value_digit);
    message(std::begin(array), std::end(array));

    std::cout << std::endl << "_____sorting_of_vector_____" << std::endl;

    message(v.begin(), v.end());
    counting_sort<int>(v.begin(), v.end(), value_digit);
    message(v.begin(), v.end());
}

int main(int argc, char const *argv[]) {
    counting();
    return 0;
}
