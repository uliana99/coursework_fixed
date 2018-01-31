// HEAP.HPP

#include <iostream>

template <typename RandomAccessIterator>
void heapEngine(RandomAccessIterator begin, RandomAccessIterator end, long int root) {
    // Указатель на адрес (&) памяти кореня
    RandomAccessIterator largest = begin + root;
    // Указатель на адрес (&) левой ветки
    RandomAccessIterator left = begin + (root * 2 + 1);
    // Указатель на адрес (&) правой ветки
    RandomAccessIterator right = begin + (root * 2 + 2);

    // Если левое значение больше корня,
    // переопределяем корень.
    if (left < end && *left > *largest)
        largest = left;

    // Если правое значение больше корня,
    // переопределяем корень.
    if (right < end && *right > *largest)
        largest = right;

    // Если корень изменился.
    if (largest != (begin + root)) {
        std::swap(*(begin + root), *largest);

        // Рекурсивный вызов heapEngine
        // для прохода в глубину дерева.
        heapEngine(begin, end, (largest - begin) );
    }
}


template <typename RandomAccessIterator>
void heap_sort(RandomAccessIterator begin, RandomAccessIterator end) {
    RandomAccessIterator iter;
    long int size = end - begin;

    // Проход по массиву
    // для ввывода в вершину максимального значения.
    for (long int i = size / 2 - 1; i >= 0; i--)
        heapEngine(begin, end, i);

    // Сортируем массив один за одним исключая max.
    for (iter = (end - 1); iter >= begin; iter--) {
        // Переносим максимум
        // в конец сортируемого массива.
        std::swap(*begin, *iter);

        // Вызываем алгоритм сортировки
        // с уменьшением размера массива на 1.
        // [ 2, 6, 3, 1 ] (7) <- max
        heapEngine(begin, iter, 0);
    }
}
