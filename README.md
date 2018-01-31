<img src="https://molpredstvo.ru/wp-content/uploads/2017/01/Gerb_MGTU_imeni_Baumana.png" width="160" height="whatever" align="right">

![ID](https://img.shields.io/badge/Кошкина-Ульяна-C71585.svg) [![Build Status](https://travis-ci.org/uliana99/coursework_fixed.svg?branch=master)](https://travis-ci.org/uliana99/coursework_fixed) [![codecov](https://codecov.io/gh/uliana99/coursework_fixed/branch/master/graph/badge.svg)](https://codecov.io/gh/uliana99/coursework_fixed) [![License: MIT](https://img.shields.io/badge/License-MIT-EE82EE.svg)](/LICENSE)

## Курсовой проект 🚀: **bubble | cocktail | counting | heap**
Тема: ***Реализация основных алгоритмов сортировок***

## **Issue**
- [X] Реализация сортировок шаблонного типа через итераторы
- [X] Улучшение кода в соотвествии со стандартами С++11
- форматирование 
- удаление устаревшей семантики
- [X] Реализация **cocktail sort** согласно алгоритму 
- выполнение тестов
- анализ кода
- [X] Изменения в  **CMakeLists.txt**
- [X] Оценка алгоритма сортировок по времени
- данные в таблице представлены в наносекундах

| algo | 1.000 | 10.000	| 100.000	| 1.000.000	| 10.000.000 | 100.000.000 | 1.000.000.000|
| --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| *bubble* 👎🏻| 5.102.810 |	378.466.479 |	38.527.911.768 | 3.894.571.372.968 | 💤🌙 | 🌙 | 🌙 |
| *counting* 👍🏻|	21.595 |	145.897 |	1.156.008 |	9.504.525 |	86.160.313 | 946.240.774 | 8.132.343.315 |
| *cocktail*	| 2.304.713 |	215.255.307 |	20.231.668.073 |	2.152.592.092.672 | 🌙 | 🌙 | 🌙 |
| *heap*	| 224.502 |	2.529.952 |	29.087.901 | 249.407.843 |	2.738.505.195 |	30.936.020.736 | 354.935.629.872 |

👍🏻 - самая быстрая из реализованных сортировок

👎🏻 - самая медленная из реализованных сортировок

X - 



## Техническое задание
- [X] Реализовать основные алгоритмы сортировок с использование шаблонных функций языка **C++**;
- [X] Тестирование разработанных алгоритмов с использованием  фреймворка для модульного тестирования **Catch**;
- [X] Обеспечение **100%** покрытия кода;
- [X] Рассмотреть возможность оптимизации при реализации алгоритмов направленных на работу в мультизадачных системах.

## Статический анализ кода
| check | algorithm | cpplint report | cppcheck report | OCLint report |
| :---: | --- | --- | --- | --- |
| ☑️ | **bubble** | Done processing bucket.hpp | Checking bucket.hpp ... | Summary: TotalFiles=1 FilesWithViolations=0 P1=0 P2=0 P3=0 |
| ☑️ | **cocktail** | Done processing cocktail.hpp | Checking cocktail.hpp ... | Summary: TotalFiles=1 FilesWithViolations=0 P1=0 P2=0 P3=0 |
| ☑️ | **counting** | Done processing merge.hpp | Checking merge.hpp ... | Summary: TotalFiles=1 FilesWithViolations=0 P1=0 P2=0 P3=0 |
| ☑️ | **heap** | Done processing radix.hpp | Checking radix.hpp ... | Summary: TotalFiles=1 FilesWithViolations=0 P1=0 P2=0 P3=0 |


## Визуализация алгоритмов сортировок
| **bubble sort** | **cocktail sort** | **counting sort** | **heap sort** |
| :---: | :---: | :---: | :---: |
| <img src= "http://sorting.valemak.com/wp-content/uploads/2013/11/bubble_1.gif" width="300" height="whatever"> | <img src= "http://sorting.valemak.com/wp-content/uploads/2013/12/sort_cocktail.gif" width="300" height="whatever"> | <img src= "http://sorting.valemak.com/wp-content/uploads/2013/12/sort_counting.gif" width="300" height="whatever"> | <img src= "http://sorting.valemak.com/wp-content/uploads/2014/04/heapsort.gif" width="300" height="whatever"> |
