# Описание проекта

Даны 2 стека. Один пустой, в другом лежит случайный набор чисел, который подается на вход в программу.
Надобно отсортировать числа в первом стеке за оптимальное количество операций. Операции, которые можно проводить с числами четко заданы в сабжекте.
(Сдвиг всех элемнтов на 1 вниз/вверх, свап элементов в топе стека и т.д)
Оптимальность алгоритма сортировки указана в чек-листе, он также прилагается к проекту и находится в папке "subject".

# Описание процесса создания программы

Так как в задании заданы свои четкие правила игры, мною было решено самому придумать алгоритм сортировки, хоть это было и рискованно.
(Можно было бы взять готовый алгоритм  даже для этой задачи, т.к все уже есть на гите, но я понимал, что итак смогу повторить его как обезьянка...)
1. Придумать простейший способ сортировки, не заботясь об оптимизации, но должна быть стопроцентная гарантия, что все числа будут отсортированы.
2. Тестим, при различных кейсах, правильно ли я написал сам код.
3. Проверяем, насколько плох наш простейший код с точки зрения количества операций, затраченных на сортировку.
4. Анализируем и замечаем закономерности, говорящие нам о том, почему наш код плох.
5. Поняв причины, начинаем улучшать наш алгоритм, обязательно тестируем наши идеи! (Кажущееся улучшение, может стать ухудшением программы...)
6. Исчерпав все вдохновение и реализовав все идеи, тестируем финальную версию на оптимальность!

# Описание полученного опыта и впечатления

Это был воистину интересный опыт! Я принял рискованное решение, попробовать самому написать алгоритм и потестить самого себя, ведь дедлайны не дремали!
Мне было интересно узнать, смогу ли я без каких-либо знаний о сортировке, без необходимых математических навыков и знаний решить эту задачу!
Смогу ли я естестенным путем найти решение. Я же хочу придумывать программы, их реализацию, значит я должен уметь находить ответ на вопрос "как это сделать?"
5 недель пота и... я сделал это! Помимо этого, я постоянно ковырялся в коде и искал пути для решения по ходу поступающих проблем, в итоге у меня начали вырабатываться
методы решения каких-либо задачек! После, я узнал у ребят, кто как сделал. Кто-то постоянно делили на 2 стек, и половину чисел перебрасывал между 2-мя стеками, а кто-то
сортировал последовательности чисел, а я обЪеденил эти 2 метода, пусть и кривовато, наверняка, но оно того стоило! Конечно, не стоит постоянно изобретать велосипед,
но эта была отличная самопроверка!
