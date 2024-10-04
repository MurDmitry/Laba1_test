[![CI/CD GitHub Actions](https://github.com/MurDmitry/Laba1_test/actions/workflows/test_action.yml/badge.svg)](https://github.com/MurDmitry/Laba1_test/actions/workflows/test_action.yml)
[![Coverage Status](https://coveralls.io/repos/MurDmitry/Laba1_test/badge.svg?branch=master)](https://coveralls.io/github/MurDmitry/Laba1_test?branch=master)
[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=MurDmitry_Laba1_test&metric=alert_status)](https://sonarcloud.io/summary/new_code?id=MurDmitry_Laba1_test)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=MurDmitry_Laba1_test&metric=bugs)](https://sonarcloud.io/summary/new_code?id=MurDmitry_Laba1_test)
[![Code Smells](https://sonarcloud.io/api/project_badges/measure?project=MurDmitry_Laba1_test&metric=code_smells)](https://sonarcloud.io/summary/new_code?id=MurDmitry_Laba1_test)

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
