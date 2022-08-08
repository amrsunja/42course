# What i can use
* Nom du programme 		 -	libftprintf.a
* Fichiers de rendu 	 -	Makefile, *.h, */*.h, *.c, */*.c
* Makefile 						 - 	NAME, all, clean, fclean, re
* Fonctions autorisees -	malloc, free, write, va_start, va_arg, va_copy, va_end
* Libft autorisee 		 -	Oui
* Description 				 -	Une bibliothèque qui contient ft_printf(), une
													fonction imitant la fonction printf() originale

## Prototype ft printf:
* int    ft_printf(const char *, ...);

## Вот некоторые требования, которым нужно следовать:
• В отличие от исходной функции printf() вам не нужно управлять буфером.
• Вы должны обрабатывать следующие преобразования: cspdiuxX%
• Ваш вывод будет сравниваться с исходной функцией printf().
• Вы должны использовать команду ar для создания вашей библиотеки.
Использование команды libtool запрещено.
• Ваш libftprintf.a должен быть создан в корне вашего репозитория.

# Эта функция возвращает количество напечатаных символов

Link for tutorial
https://codeberg.org/UncleReaton/ft_printf/src/branch/main/libft/ft_putnbr.c

## Вы должны реализовать следующие преобразования:
• %c Отображает один символ.
• %s Отображает строку символов (как определено соглашением C).
• %p Аргумент указателя void * должен отображаться в шестнадцатеричном формате.
• %d Отображает десятичное число (с основанием 10).
• %i Отображает целое число с основанием 10.
• %u Отображает беззнаковое десятичное число (по основанию 10).
• %x Отображает число в шестнадцатеричном формате (с основанием 16) со строчными буквами.
• %X Отображает число в шестнадцатеричном формате (с основанием 16) с прописными буквами.
• %% Отображает знак процента.

5 — TESTERS (I suggest to use them in this order, from basic to advance)
https://github.com/gavinfielder/pft # basic unit tests
https://github.com/Mazoise/42TESTERS-PRINTF # multiple flags
https://github.com/cacharle/ft_printf_test # randomly generated


c = va_arg(args, int)
s = va_arg(args, char *)
d = va_arg(args, int)
i = va_arg(args, int)
u = va_arg(args, unsigned int)
p = va_arg(args, unsigned long)# or 
                               #(unsigned long)va_arg(args, void *);
x = va_arg(args, unsigned int)
X = va_arg(args, unsigned int)
