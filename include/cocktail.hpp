// COCKTAIL.HPP

#include <iostream>

template <typename RandomAccessIterator>
void cocktail_sort(RandomAccessIterator begin, RandomAccessIterator end) {
    RandomAccessIterator iter;
    bool flag = true;
 
    while (flag) {
        flag = false;
 
        // Применяем алгоритм bubble
        // слева направо.
        for (iter = begin; iter < (end - 1); iter++) {
            if (*iter > *(iter + 1)) {
                std::swap(*iter, *(iter + 1));
                flag = true;
            }
        }
 
        // Если ничего не переставили
        // -> массив отсортирован.
        // -> завепщаем цикл.
        if (!flag) {
            break;
        }
 
        // Если переставили
        // продолжаем сортировку
        // в обратном направлении.
        flag = false;
 
        // Уменьшаем область сортировки
        // спарва на 1, т.к. - лежит max.
        --end;
 
        // Применяем алгоритм bubble
        // справа налево.
        for (iter = (end - 1); iter > begin; iter--) {
            if (*iter < *(iter - 1)) {
                std::swap(*iter, *(iter - 1));
                flag = true;
            }
        }
 
        // Уменьшаем область сортировки
        // слева на 1, т.к. - лежит min.
        ++begin;
    }
}
