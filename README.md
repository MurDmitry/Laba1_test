[![CI/CD GitHub Actions](https://github.com/MurDmitry/Laba1_test/actions/workflows/test-action.yml/badge.svg)](https://github.com/MurDmitry/Laba1_test/actions/workflows/test-action.yml)

Лабораторная работа номер 1 (предмет тестирование):

Тест 1:
   1. Описание: проверка на бесконечное количество решений
   2. Входные данные: 0, 0, 0
   3. Результат: 3 (статус равен 3 => бесконечно много решений)

Тест 2:
   1. Описание: проверка на отсутсвие решений
   2. Входные данные: 0, 0, 100
   3. Результат: -1 (статус равен -1 => нет решений)

Тест 3:
   1. Описание: неквадратное уравнение
   2. Входные данные: 0, 3, 6
   3. Результат: 1 (статус равен 1 => одно решение (один корень))

Тест 4:
   1. Описание: проверка на отрицательный дискриминат
   2. Входные данные: 2, 4, 8
   3. Результат: -1 (статус равен -1 => нет решений)

Тест 5:
   1. Описание: проверка на дискриминант = 0
   2. Входные данные: 2, -4, 2
   3. Результат: 1 (статус равен 1 => 1 корень)

Тест 6:
   1. Описание: дискриминант > 0
   2. Входные данные: 2, -6, 4
   3. Результат: 2 (статус равен 2 => 2 решения)
