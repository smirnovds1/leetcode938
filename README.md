На собеседовании в Яндекс одной из задач дали https://leetcode.com/problems/range-sum-of-bst/


Мне был дан отказ, и в формулировке было "Вторая считает результат верно, но делает это не оптимально."

На мои попытки узнать, а какой алгоритм будет более оптимальным, ответили что не могут сказать, т.к. это было бы подсказкой.

Просмотрел решения с leetcode - более оптимального решения не нашел.


В репозитории лежит мое решение, предлагаю Яндексу все-таки показать решение, которое будет более оптимальным.

generateData сгенерирует файл data.bin с 1'000'000 срандомленных int'ов от 0 до 9'999'999

testTask замерит время выполнения Solution::rangeSumBST и выведет в консоль вместе с результатом (для проверки корректности).