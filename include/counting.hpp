// COUNTING.HPP

#include <iostream>

template <typename T, typename RandomAccessIterator>
void counting_sort(RandomAccessIterator begin, RandomAccessIterator end, int rad) {
    RandomAccessIterator iter;

    // Создаем временный пустой массив и заполняем его 0.
    long int size = end - begin;
    T* temp = new T[size] {0};

    // Создаем массив для подсчета количества элементов
    // заполняем его 0.
    int* count = new int[rad] {0};

    // Подсчитываем число повторений каждого
    // значения в сортируемом массиве
    // и вносим полученное количество в массив count
    // по индексу проверяемого числа.
    for (iter = begin; iter != end; iter++)
        ++count[*iter];

    // Проходим по массиву count и складываем значения
    // текущей ячейки со значением в предыдущей.
    // Для получения актуального положения элемента.
    for (int i = 1; i < rad; i++)
        count[i] += count[i-1];

    // Заполняем временный массив temp, сопоставляя
    // значения сортируемого массива с индексом
    // в массиве count.
    for (iter = begin; iter != end; iter++) {
        temp[ count[ *iter ] - 1 ] = *iter;
        --count[*iter];
    }

    // Копируем значения из массива temp
    // в сортируемый массив.
    iter = begin;
    for (long int i = 0; i < size; i++)
        *iter++ = temp[i];

    delete[] count;
    delete[] temp;
}