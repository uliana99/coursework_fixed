//  EXAMPLE_COUNTING.CPP

#include "counting.hpp"
#include "message.hpp"
#include <random>
#include <chrono>
#include <cmath>

void counting() {
    std::cout << std::endl << "____________COUNTING_SORT_[time_test]____________" << std::endl;

    int counter = 1;
    long int array_size;
    const int value_digit = 100;

    for (array_size = 1000; array_size < 10000000000; array_size *= 10) {
        std::cout << (counter++) << ". array[ 10^" << log10(array_size) << " ]  >>>  ";

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(0, value_digit);

        int* array = new int[array_size];

        for (long int i = 0; i < array_size; i++) {
            array[i] = dis(gen);
        }

        auto start = std::chrono::high_resolution_clock::now();
        counting_sort<int>(array, array + array_size, value_digit);
        auto finish = std::chrono::high_resolution_clock::now();

        std::cout << (std::chrono::duration_cast<std::chrono::nanoseconds>(finish-start).count()) << " [nanoseconds]\n";

        delete[] array;
    }

    std::cout << std::endl;
}

int main(int argc, char const *argv[]) {
    counting();
    return 0;
}
