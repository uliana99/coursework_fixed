//  BUBBLE.HPP

#include <iostream>

template <typename RandomAccessIterator>
void bubble_sort(RandomAccessIterator begin, RandomAccessIterator end) {
    RandomAccessIterator iter;
    bool flag = true;

    while (flag) {
        flag = false;
        for (iter = begin; iter != (end - 1); iter++) {
            if (*iter > *(iter + 1)) {
                std::swap(*iter, *(iter + 1));
                flag = true;
            }
        }
    }
}