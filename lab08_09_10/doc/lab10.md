# Лабораторна робота №8. Вступ до блок-схем алгоритмів. №9. Вступ до документації коду (частина 1). №10. Вступ до локументації проекту.
# Вимоги:

* Розробник: Васюткін Єгор
* Загальне завдання: Реалізувати програму з використанням функцій.
* Індивідуальне завдання : Реалізувати функцію, що визначає скільки серед заданої послідовності таких пар, у котрих перше число менше наступного, використовуючи функцію з варіативною кілткістю аргументів.
# Опис роботи:

* Функціональне призначення : Виконування дій програми за допомогою функцій, для спрощення загального завдання програми. Функція допомагає «розбити» велику задачу на підзадачі, у функції main лише зсилатися на їх опис.

* Опис логічної структури для завдання 2 з лабораторної роботи № 5 : Функція 'main' генерує задане число та викликає функцію для обчислення результату. Схема алгоритму функції:
!https://github.com/Entlis/Programing-Vasiutkin/blob/master/lab08_09_10/doc/assets/task2_lab05_main.c.png
Повертаемо функции: esult_for = define_prime_num_for(x), result_while = define_prime_num_while(x), result_do = define_prime_num_do(x).
!https://github.com/Entlis/Programing-Vasiutkin/blob/master/lab08_09_10/doc/assets/task2_lab05_main.h.png
* Важливі елементи програми:
int temp_for  = 0;
	int result_for = -1;
	for (int i = 2; i < num; i++) {
		temp_for = num % i;
		if (temp_for == 0) {
			result_for = -1;
			break;
			
while (i < num) {
		temp_while = num % i;
		if (temp_while == 0) {
			result_while = -1;
			break;
		} else {
			result_while = 1;
		}
		i++;
		
do  {
		temp_do = num % j;
		if (temp_do == 0) {
			result_do = -1;
			break;
		} else {
			result_do = 1;
		}
		j++;
	} while (j < num);
* Опис логічної структури для завдання 2 з лабораторної роботи № 6 
!https://github.com/Entlis/Programing-Vasiutkin/blob/master/lab08_09_10/doc/assets/task2_lab06_main.c.png

!https://github.com/Entlis/Programing-Vasiutkin/blob/master/lab08_09_10/doc/assets/task2_lab06_main.h.png
# Варіанти використання
Для завдання 2 з лабораторної роботи № 5: Розробити програму яка визначае, чи є задане ціле число простим
!https://github.com/Entlis/Programing-Vasiutkin/blob/master/lab08_09_10/doc/assets/task2_lab05.1.png
!https://github.com/Entlis/Programing-Vasiutkin/blob/master/lab08_09_10/doc/assets/task2_lab05.2.png
# Для завдання 2 з лабораторної роботи № 6 
* Розробити програму яка заповнюе масив із кількості елементів простими числами, що не повторюються
!https://github.com/Entlis/Programing-Vasiutkin/blob/master/lab08_09_10/doc/assets/task2_lab06.1.png
!https://github.com/Entlis/Programing-Vasiutkin/blob/master/lab08_09_10/doc/assets/task2_lab06.2.png
* Структура програми:
├── doc
│   ├── assets
│   │   ├── task2_lab05.1.png
│   │   ├── task2_lab05.2.png
│   │   ├── task2_lab05_main.c.png
│   │   ├── task2_lab05_main.h.png
│   │   ├── task2_lab06.1.png
│   │   ├── task2_lab06.2.png
│   │   ├── task2_lab06_main.c.png
│   │   └── task2_lab06_main.h.png
│   ├── lab08_09_10.md
│   └── lab08_09_10.pdf
├── Doxyfile
├── lab05_task2
│   ├── README.md
│   └── src
│       └── main.c
|       └── main.h
├── lab06_task2
│   ├── README.md
│   └── src
│       └── main.c
|       └── main.h
├── Doxygen
├── Makefile
└── README.md
# Висновки
В ході даної лабораторної роботи, я навчився використовувати функцкції, які повертають і не повертають результат, задля уникання повторів в коді; «спрощувати» загальне завдання,розбиваючи його на меньші
